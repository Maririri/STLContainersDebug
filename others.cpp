//
// Created by Maria Baburina on 19.10.21.
//

#include <string>
#include <queue>
#include <vector>
#include <list>
#include <iostream>
#include "others.h"

void tprintf(const char* format) // base function
{
    std::cout << format;
}

template<typename T, typename... Targs>
void tprintf(const char* format, T value, Targs... Fargs) // recursive variadic function
{
    for ( ; *format != '\0'; format++ ) {
        if ( *format == '%' ) {
//            std::cout << value;
            tprintf(format+1, Fargs...); // recursive call
            return;
        }
        std::cout << *format;
    }
}


void others_foo() {
    std::vector<std::queue<std::string>> vqs;
    std::queue<std::string> qs;
    qs.push("one");
    qs.push("two");
    vqs.emplace_back(qs);

    std::list<std::vector<std::string>> l;
    std::vector<std::string> vs{"one", "two"};
    l.emplace_back(vs);

    tprintf("% world% %\n","Hello",'!',123, vqs);
}