#include "Button.hh"
#include <iostream>

class WinButton : public Button
{
private:
    /* data */
public:
    void print() const override{
        std::cout<<"Win Button\n";
    }
};
