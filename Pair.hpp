//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_PAIR_HPP
#define PROJECT4_PAIR_HPP

#include "Tokenizer.hpp"
#include <iostream>
#include "fstream"
using namespace std;

class Pair {
    // represents a entity and its value:

public:
//    Pair();

//    Pair(std::string attributeName, std::string attributeValue);
//    Pair(std::string attributeName, int);

    bool isNumber();  // is the datatype of the value of this entity integer?
    int numberValue();
    std::string stringValue();
    std::string attributeName();
    void parsePair(Tokenizer *, Token&);

private:
    std::string _attributeName, _attributeStringValue;
    int _attributeNumberValue;
    bool _isNumber;
};


#endif //PROJECT4_PAIR_HPP
