//
// Created by Marco Barragan on 5/4/20.
//

#include "ArtistImages.hpp"


void ArtistImages::loadArtistsFromFile(std::string FileName) {
    Tokenizer *tokenizer = new Tokenizer(FileName);
    parseJSONArray(tokenizer);
    delete tokenizer;

}

ArtistImages::ArtistImages() {



}



//void ArtistImages::setVectorArtistImages(vector<ArtistImage *>*_objects) {
//    objectsOfArtistImages = _objects;
//
//    for (auto& objects : *objectsOfArtistImages)
//    {
//        objects->print();
//        cout << endl;
//
//        ///call aritstimages->print; call find
//    }
//
//}


