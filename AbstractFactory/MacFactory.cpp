#include "MacFactory.hh"
#include "MacButton.cpp"
#include "MacCheckbox.hh"

Button* MacFactory::createButton() const
{
    return new MacButton();
}

Checkbox* MacFactory::createCheckbox() const
{
    return new MacCheckbox();
}
