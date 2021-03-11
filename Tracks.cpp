//
// Created by Marco Barragan on 4/24/20.
//

#include "Tracks.hpp"

void Tracks::loadTracksFromFile(std::string FileName) {

    Tokenizer *tokenizer = new Tokenizer(FileName);
    parseJSONArray(tokenizer);
    delete tokenizer;

}
