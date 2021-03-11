//
// Created by Marco Barragan on 4/27/20.
//

#include "Tokenizer.hpp"

Token::Token() {

    _isOpenSquareBracket = false, _isCloseSquareBracket = false, _isComma = false, _isOpenCurlyBrace = false,
    _isCloseCurlyBrace = false, _isQuote = false, _isColon = false, _isEscape = false;

}


Tokenizer::Tokenizer() {}


Tokenizer::Tokenizer(const string& Filename) {

    stream.open(Filename);


}

Token Tokenizer::getToken() {

    Token token;


    stream >> token.currentChar;

    if (token.currentChar == '[')
    {
        token._isOpenSquareBracket = true;
    }
    else if (token.currentChar == ']')
    {
        token._isCloseSquareBracket = true;
    }
    else if (token.currentChar == ',')
    {
        token._isComma = true;
    }
    else if (token.currentChar == '{')
    {
        token._isOpenCurlyBrace = true;
    }
    else if (token.currentChar == '}')
    {
        token._isCloseCurlyBrace = true;
    }
    else if (token.currentChar == '\\')
    {
        token._isEscape = true;
    }
    else if (token.currentChar == '"')
    {
        token._isQuote = true;
    }
    else if (token.currentChar == ':')
    {
        token._isColon = true;
    }

    return token;


}

Token Tokenizer::getTokenNWS() {
    Token token;

    stream.get(token.currentChar);

    if (token.currentChar == '\\')
    {
        token._isEscape = true;
    }
    else if (token.currentChar == '"')
    {
        token._isQuote = true;
    }

    return token;
}
