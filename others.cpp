//
// Created by Maria Baburina on 19.10.21.
//

#include <string>
#include <queue>
#include <vector>
#include <list>
#include "others.h"

void others_foo() {
    std::vector<std::queue<std::string>> vqs;
    std::queue<std::string> qs;
    qs.push("one");
    qs.push("two");
    vqs.emplace_back(qs);

    std::list<std::vector<std::string>> l;
    std::vector<std::string> vs{"one", "two"};
    l.emplace_back(vs);
}