//
// Created by Marco Barragan on 4/27/20.
//

#ifndef PROJECT4_TOKENIZER_HPP
#define PROJECT4_TOKENIZER_HPP

#include<iostream>
#include <fstream>

using namespace std;

struct Token{

    Token();
    bool isOpenSquareBracket()          { return _isOpenSquareBracket; }
    bool isCloseSquareBracket()         { return _isCloseSquareBracket; }
    bool isComma()                      { return _isComma; }
    bool isOpenCurlyBrace()             { return _isOpenCurlyBrace; }
    bool isCloseCurlyBrace()            { return _isCloseCurlyBrace; }
    bool isQuote()                      { return _isQuote; }
    bool isColon()                      { return _isColon; }
    bool isEscape()                     { return _isEscape; }


    bool _isEscape;
    bool _isColon;
    bool _isQuote;
    bool _isCloseCurlyBrace;
    bool _isOpenCurlyBrace;
    bool _isComma;
    bool _isCloseSquareBracket;
    bool _isOpenSquareBracket;


    char currentChar;


};




class Tokenizer{

public:
    Tokenizer();
    explicit Tokenizer(const string&);


    Token getToken();
    Token getTokenNWS();



    fstream stream;



};


#endif //PROJECT4_TOKENIZER_HPP
