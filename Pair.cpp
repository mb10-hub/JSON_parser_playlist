//
// Created by Marco Barragan on 4/24/20.
//

#include "Pair.hpp"

void Pair::parsePair(Tokenizer *tokenizer, Token& token) {
    ///Parse this B


    token = tokenizer->getToken();

    if(!token.isQuote())
    {
        cout << "ERROR: was expecting a \"" << endl;
        exit(4);
    }


    /// Will get rid of the "
    token = tokenizer->getToken();


    while( !token.isQuote())
    {
        _attributeName += token.currentChar;
        token = tokenizer->getToken();
    }

    ///will get rid of the end "
    token = tokenizer->getToken();

    if (!token.isColon())
    {
        cout << "ERROR: expected : " << endl;
        exit(5);
    }

        ///get rid of the :
    token = tokenizer->getToken();


    if (isdigit(token.currentChar))
    {
        tokenizer->stream.unget();
        int number;
        _isNumber = true;
        tokenizer->stream >> number;
        _attributeNumberValue = number;

    }
    else
        {
            ///get the intiial "
            token = tokenizer->getToken();

            if( token.isQuote())
            {
                _attributeStringValue = '"';
            }
            else
                {

                while( !token.isQuote())
                {
                     _attributeStringValue += token.currentChar;

                     if (token.isEscape())
                     {
                         token = tokenizer->getTokenNWS();
                         _attributeStringValue += token.currentChar;
                     }

                    token = tokenizer->getTokenNWS();
                }

                }

            _isNumber = false;
        }
    ///pull the ending " of the data
    token = tokenizer->getToken();


}


bool Pair::isNumber() {

    return _isNumber;

}

int Pair::numberValue() {
    return _attributeNumberValue;
}

std::string Pair::stringValue() {
    return _attributeStringValue;
}

std::string Pair::attributeName() {
    return _attributeName;
}

