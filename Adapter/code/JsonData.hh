#ifndef JSONDATA__HH
#define JSONDATA__HH

#include <string>

class JsonData
{
private:
    std::string data;
public:
    JsonData(std::string data);

    std::string getData() const;
};


#endif