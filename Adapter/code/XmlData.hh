#ifndef XMLDATA__HH
#define XMLDATA__HH

#include <string>

class XmlData
{
private:
    std::string data;
public:
    XmlData() = delete;
    XmlData(std::string data);

    std::string getData() const;
};


#endif