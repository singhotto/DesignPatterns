#include "./Button.hh"

#include <iostream>

class MacButton : public Button
{
private:
    /* data */
public:
    void print() const override{
        std::cout<<"mac button\n";
    }
};