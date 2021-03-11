//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_ALBUMIMAGE_HPP
#define PROJECT4_ALBUMIMAGE_HPP
#include<fstream>
#include<cstring>
#include <vector>
#include <iostream>
#include "JSONDataObject.hpp"
#include "ArtistImage.hpp"


class AlbumImage: public JSONDataObject {
public:
    AlbumImage();
    //~AlbumImage();
    string type();
    string uri();
    unsigned width();
    unsigned album_id();
    unsigned height();

    void print()override;

    void writeHTML_AlbumImage(ofstream& ossHTML) override;

private:
    string _type, _uri;
    unsigned _width, _albumID, _height;
    bool cachedType, cachedURI, cachedWidth, cachedHeight, cachedAlbumID;


};


#endif //PROJECT4_ALBUMIMAGE_HPP
