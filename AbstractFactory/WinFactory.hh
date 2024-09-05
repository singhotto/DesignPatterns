#ifndef WINFACTORY__GUARD
#define WINFACTORY__GUARD

#include "GuiFactory.hh"

class WinFactory : public GuiFactory
{
private:
    /* data */
public:
    Button* createButton() const override;
    Checkbox* createCheckbox() const override;
};


#endif