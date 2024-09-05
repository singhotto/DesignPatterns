#include<iostream>
#include "code/XmlData.hh"
#include "code/Adapter.hh"

int main(){
    XmlData* data = new XmlData(R"(
    <family>
        <aunt>
            <name>Christine</name>
            <name>Stephanie</name>
        </aunt>
        <uncle>
            <name>John</name>
        </uncle>
    </family>)");

    Adapter adapter(data);

    std::cout<<adapter.getData()<<"\n";

    delete data;

    return 0;
}