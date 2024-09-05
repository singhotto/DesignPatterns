#ifndef ADAPTER__HH
#define ADAPTER__HH

#include "XmlData.hh"
#include <string>
#include <sstream>
#include <stack>
#include <map>
#include <vector>

class Adapter
{
private:
    /* data */
    XmlData* adaptee;

    std::string trim(const std::string& str);
    std::string parseXmlToJson(std::istringstream& xmlStream);
    std::string xmlToJson(const std::string& xml);
public:
    Adapter(XmlData* adaptee);

    std::string getData();
};

#endif