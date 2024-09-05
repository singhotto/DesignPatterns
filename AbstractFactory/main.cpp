#include <iostream>
#include "Application.hh"
#include "ApplicationConfig.cpp"

int main(){
    ApplicationConfig a;
    Application* app = a.createApplication();
    app->showGui();
    delete app;
    return 0;
}