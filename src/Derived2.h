//
// Created by Brandon on 16/03/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H

#include "Base.h"
class Derived2 : public Base {
public:
    Derived2();
    ~Derived2();
    void do_something() const override;
};
#endif //LAB01_INHERITANCE_DERIVED2_H
