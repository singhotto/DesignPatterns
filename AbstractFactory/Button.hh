#ifndef BUTTON__GUARD
#define BUTTON__GUARD

class Button
{
public:
    virtual ~Button(){};
    virtual void print() const = 0;
};

#endif