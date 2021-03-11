//
// Created by Marco Barragan on 5/4/20.
//

#include "AlbumImages.hpp"

void AlbumImages::loadArtistsFromFile(std::string FileName) {
    Tokenizer *tokenizer = new Tokenizer(FileName);
    parseJSONArray(tokenizer);
    delete tokenizer;

}
