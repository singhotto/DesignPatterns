#ifndef APPLICATION__GUARD
#define APPLICATION__GUARD

#include "GuiFactory.hh"

class Application
{
private:
    /* data */
    GuiFactory* factory;
public:
    Application(GuiFactory* factory);
    ~Application();

    void showGui() const;
};


#endif