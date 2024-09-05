#ifndef GUIFACTORY__GUARD
#define GUIFACTORY__GUARD

#include "Button.hh"
#include "Checkbox.hh"

class GuiFactory
{
public:
    virtual ~GuiFactory() {};
    virtual Button* createButton() const = 0;
    virtual Checkbox* createCheckbox() const = 0;
};


#endif