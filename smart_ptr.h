//
// Created by Maria Baburina on 18.10.21.
//

#ifndef STLCONTAINERSDEBUG2_UNIQUE_PTR_H
#define STLCONTAINERSDEBUG2_UNIQUE_PTR_H

struct Base {
    Base();

    ~Base();

    void bar();
};

struct Derived : public Base {
    Derived();

    ~Derived();
};

void smart_ptr_foo();

#endif //STLCONTAINERSDEBUG2_UNIQUE_PTR_H
