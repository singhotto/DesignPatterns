#include "Adapter.hh"

std::string Adapter::trim(const std::string &str)
{
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return (first == std::string::npos || last == std::string::npos) ? "" : str.substr(first, last - first + 1);
}

std::string Adapter::parseXmlToJson(std::istringstream &xmlStream)
{
    std::ostringstream jsonStream;
    std::stack<std::string> tagStack;  // Stack to hold open tags
    std::map<std::string, std::vector<std::string>> multiElements;  // Map to handle multiple elements
    std::string line;

    while (std::getline(xmlStream, line)) {
        line = trim(line);
        if (line.empty()) continue;

        // Start tag, e.g., <family>
        if (line[0] == '<' && line[1] != '/') {
            std::string::size_type end = line.find('>');
            std::string tag = line.substr(1, end - 1);

            // Push the tag to the stack and check for arrays (multiple elements with the same tag)
            if (!tagStack.empty() && tag == tagStack.top()) {
                if (multiElements.find(tag) == multiElements.end()) {
                    multiElements[tag] = std::vector<std::string>();
                }
                multiElements[tag].push_back("{");
                jsonStream << "[";
            } else {
                tagStack.push(tag);  // Push the tag to the stack
                jsonStream << "\"" << tag << "\": ";
            }

            // Self-closing tag, e.g., <tag />
            if (line[end - 1] == '/') {
                tagStack.pop();
                jsonStream << "{}";
            } else {
                jsonStream << "{";
            }

        // End tag, e.g., </family>
        } else if (line[0] == '<' && line[1] == '/') {
            std::string tag = tagStack.top();
            tagStack.pop();

            if (multiElements.find(tag) != multiElements.end()) {
                jsonStream << "}]";  // Close array
                multiElements.erase(tag);
            } else {
                jsonStream << "}";
            }

            if (!tagStack.empty()) jsonStream << ","; // Add comma if within another object

        // Text content inside the tag, e.g., Christine
        } else {
            jsonStream << "\"" << line << "\"";  // Add text as a string in JSON

            if (!tagStack.empty()) jsonStream << ",";
        }
    }

    return jsonStream.str();
}

std::string Adapter::xmlToJson(const std::string &xml)
{
    std::istringstream xmlStream(xml);
    std::ostringstream json;

    json << "{\n" << parseXmlToJson(xmlStream) << "\n}";
    return json.str();
}

Adapter::Adapter(XmlData *adaptee) : adaptee(adaptee)
{
}

std::string Adapter::getData() 
{
    std::string data = adaptee->getData();
    return xmlToJson(data);
}
