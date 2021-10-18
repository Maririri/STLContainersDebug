//
// Created by Maria Baburina on 13.09.19.
//

#include "stack.h"
#include <iostream>
#include <stack>
using namespace std;

int stack_foo()
{
    // Empty stack
    stack<int> mystack;
    mystack.push(0);
    mystack.push(1);
    mystack.push(2);

    // Printing content of stack
    while (!mystack.empty()) {
        cout << ' ' << mystack.top();
        mystack.pop();
    }
}