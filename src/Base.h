//
// Created by Brandon on 16/03/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>  // allows program to output data to the screen

class Base {
public:
    Base();
    virtual ~Base();
    virtual void do_something() const;
};


#endif //LAB01_INHERITANCE_BASE_H
