#include "JsonData.hh"

JsonData::JsonData(std::string data) : data(data)
{
}

std::string JsonData::getData() const
{
    return data;
}
