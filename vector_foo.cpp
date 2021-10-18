//
// Created by Maria Baburina on 18.10.21.
//

#include <vector>
#include <string>
#include "vector_foo.h"

using namespace std;

void vector_foo() {
    vector<string> first; // empty vector of ints
    const char *four = "4";
    const char *hundred = "100";
    vector<string> second{four, hundred}; // four ints with value 100
    vector<string> third(second.begin(),
                         second.end()); // iterating through second
    vector<string> fourth(third);

    string str_dec = "2001, A Space Odyssey";
    string str_hex = "40c3";
    str_dec.append("");

    const char cdata[4] = {0x0055, 0x006e, 0x10, 0x03a};
    string string1(cdata);

    vector<string> vStr;
    vStr.emplace_back("a");
}
