//
// Created by Marco Barragan on 4/24/20.
//

#include "Artists.hpp"

void Artists::loadArtistsFromFile(std::string FileName) {
    Tokenizer *tokenizer = new Tokenizer(FileName);
    parseJSONArray(tokenizer);
    delete tokenizer;


}


