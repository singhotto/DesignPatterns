#ifndef MACFACTORY__GUARD
#define MACFACTORY__GUARD

#include "GuiFactory.hh"

class MacFactory : public GuiFactory
{
private:
    /* data */
public:
    Button* createButton() const override;
    Checkbox* createCheckbox() const override;
};


#endif