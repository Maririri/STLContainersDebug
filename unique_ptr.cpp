//
// Created by Maria Baburina on 18.10.21.
//

#include <iostream>
#include "unique_ptr.h"

Foo::Foo() { std::cout << "Foo::Foo\n"; }

Foo::~Foo() { std::cout << "Foo::~Foo\n"; }

void Foo::bar() { std::cout << "Foo::bar\n"; }

void unique_ptr_foo() {
    std::unique_ptr<Foo> pFoo1(new Foo); // p1 owns Foo
    if (pFoo1)
        pFoo1->bar();

    std::unique_ptr<Foo> pFoo2(move(pFoo1)); // now p2 owns
    if (pFoo2) pFoo2->bar();
}

