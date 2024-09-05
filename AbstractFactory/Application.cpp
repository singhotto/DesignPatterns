#include "Application.hh"

Application::Application(GuiFactory *factory) : factory(factory)
{
}

Application::~Application()
{
    delete factory;
}

void Application::showGui() const
{
    Button* btn = this->factory->createButton();
    Checkbox* chk = this->factory->createCheckbox();
    btn->print();
    chk->print();
    delete btn;
    delete chk;
}
