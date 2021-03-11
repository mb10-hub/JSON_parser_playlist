//
// Created by Marco Barragan on 4/24/20.
//

#include "Albums.hpp"

void Albums::loadAlbumsFromFile(std::string FileName) {
    Tokenizer *tokenizer = new Tokenizer(FileName);
    parseJSONArray(tokenizer);
    delete tokenizer;

}
