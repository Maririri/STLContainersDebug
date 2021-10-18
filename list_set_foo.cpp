//
// Created by Maria Baburina on 18.10.21.
//

#include <list>
#include <forward_list>
#include <set>
#include <bitset>
#include <unordered_set>
#include "list_set_foo.h"

using namespace std;

void list_set_foo(const int count) {
    list<string> lStr;
    for (int i = 0; i < count; ++i) {
        lStr.push_back("d");
    }

    std::forward_list<std::string> flStr = {"u", "v"};
    for (int i = 0; i < count; ++i) {
        flStr.push_front("u");
    }

    set<string> sStr;

    // Lets insert four elements
    sStr.insert("first");
    sStr.insert("second");
    sStr.insert("third");
    sStr.insert("fourth");
    sStr.erase("third");

    bitset<8> bsStr;
    for (int i = 0; i < count; ++i) {
        bsStr[i] = "f";
    }

    std::unordered_set<std::string> usStr({"m", "n", "o", "p"});
    for (int i = 0; i < count; ++i) {
        usStr.insert("m");
    }
}