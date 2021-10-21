//
// Created by Maria Baburina on 18.10.21.
//

#include <map>
#include <unordered_map>
#include <iostream>
#include "map.h"

using namespace std;

void map_foo(int count) {
    map<string, pair<string, string>> mStr;
    {
        mStr.insert(mStr.end(),
                    make_pair(
                            "1", pair<string, string>("key1", "val1")));
        mStr.insert(mStr.end(),
                    make_pair(
                            "2", pair<string, string>("key2", "val2")));
        mStr.insert(mStr.end(),
                    make_pair(
                            "3", pair<string, string>("key3", "val3")));
        mStr.insert(mStr.end(),
                    make_pair(
                            "4", pair<string, string>("key4", "val4")));
        mStr.insert(mStr.end(),
                    make_pair(
                            "5", pair<string, string>("key5", "val5")));
    }

    for (map<string, pair<string, string>>::iterator it =
            mStr.begin();
         it != mStr.end(); ++it)
        cout << it->first << " : " << it->second.first << " "
             << it->second.second << '\n';

    map<char, int> mymap;
    {
        mymap['b'] = 100;
        mymap['a'] = 200;
        mymap['c'] = 300;
    }

    map<int, char> m = {
            {1, 'a'},
            {3, 'b'},
            {5, 'c'},
            {7, 'd'}};

    for (map<char, int>::iterator it = mymap.begin(); it != mymap.end();
         ++it) {
        cout << it->first << " => " << it->second << '\n';
    }

    std::unordered_map<std::string, std::string> umStr({{"q", "r"},
                                                        {"s", "t"}});
    for (int i = 0; i < count; ++i) {
        umStr.insert({"o", "o"});
    }
}