#include "XmlData.hh"

XmlData::XmlData(std::string data) : data(data)
{
}

std::string XmlData::getData() const
{
    return data;
}
