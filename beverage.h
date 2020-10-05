// beverage.h

#ifndef __BEVERAGE_H
#define __BEVERAGE_H

class Beverage {
protected:
    char *description;
public:
    Beverage();
    virtual char* getDescription();
    virtual double cost() = 0;      
};

#endif
