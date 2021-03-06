//
// Created by Maria Baburina on 14.09.19.
//

#include "queue.h"
#include <queue>
#include <string>

template<typename T, typename U>
void foo(std::queue<std::string> q){
    for (int i = 0; i < 8; ++i) {
        q.pop();
    }
}

void queue_foo(const int count) {

    std::queue<std::string> qStr;
    for (int i = 0; i < count; ++i) {
        qStr.push("c");
    }

    foo<std::queue<std::string>, std::deque<std::string>>(qStr);

    for (int i = 0; i < count; ++i) {
        qStr.pop();
    }

    std::deque<std::string> dStr;
    for (int i = 0; i < count; ++i) {
        dStr.push_back("b");
    }

    std::string mystrs[] = {"i", "j", "k", "l"};

    std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string> > pqStr(mystrs, mystrs + 4);
    for (int i = 0; i < count; ++i) {
        pqStr.push("i");
    }
}