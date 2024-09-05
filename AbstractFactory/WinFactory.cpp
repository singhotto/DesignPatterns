#include "WinFactory.hh"
#include "WinButton.cpp"
#include "WinCheckbox.hh"

Button* WinFactory::createButton() const
{
    return new WinButton();
}

Checkbox* WinFactory::createCheckbox() const
{
    return new WinCheckbox();
}