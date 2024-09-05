#include "Application.hh"
#include "WinFactory.hh"
#include "MacFactory.hh"

#include <random>
#include <iostream>

class ApplicationConfig
{
private:
    int ran;
public:
    ApplicationConfig(){
        std::random_device rd;
        std::mt19937 gen(rd()); // Seed with a random device
        std::uniform_real_distribution<float> dis(0.0f, 10.0f); // Range 0 to 10

        ran = dis(gen); // Get a random float between 0 and 10
    }

    Application* createApplication(){
        GuiFactory* factory = nullptr;
        std::cout<<"Random: "<<ran<<"\n";
        if(ran >5){
            factory = new WinFactory();
        }else{
            factory = new MacFactory();
        }
        return new Application(factory);
    }
};
