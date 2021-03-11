//
// Created by Marco Barragan on 4/24/20.
//

#include "ArtistImage.hpp"
ArtistImage::ArtistImage() {
    _type = "", _uri = "";
    _width = 0, _artist_id = 0, _height = 0;
    cachedType = false, cachedURI = false, cachedWidth = false, cachedHeight = false, cachedArtistID = false;
}

string ArtistImage::type() {
    if(cachedType)
        return _type;
    cachedType = true;
    return _type = valueForStringAttribute("type");
}

string ArtistImage::uri() {
    if(cachedURI)
        return _uri;
    cachedURI = true;
    return _uri = valueForStringAttribute("uri");
}

unsigned ArtistImage::width() {
    if(cachedWidth)
        return _width;
    cachedWidth = true;
    return _width = valueForIntegerAttribute("width");
}

unsigned ArtistImage::artist_id() {
    if(cachedArtistID)
        return _artist_id;
    cachedArtistID = false;
    return _artist_id = valueForIntegerAttribute("artist_id");
}

unsigned ArtistImage::height() {
    if(cachedHeight)
        return _height;
    cachedHeight = true;
    return _height = valueForIntegerAttribute("height");
}

void ArtistImage::print() {
    cout << "type: " << type() << endl;
    cout << "width: " << width() << endl;
    cout << "artist_id: " << artist_id() << endl;
    cout << "height: " << height() << endl;
    cout << "uri: " << uri() << endl;
}

void ArtistImage::writeHTML_ArtistImage(ofstream& ossHTML) {

    ossHTML << "<img class=\"image\" " << "width=" << width() << " " << "height=" << height()
            << " src=\"" << uri() << "\">" << endl;
}
