//
// Created by Chin on 16/03/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H

#include "Base.h"
class Derived1 : public Base {
public:
    Derived1();
    ~Derived1();
    void do_something() const override;
};


#endif //LAB01_INHERITANCE_DERIVED1_H
