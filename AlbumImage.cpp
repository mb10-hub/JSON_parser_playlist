//
// Created by Marco Barragan on 4/24/20.
//

#include "AlbumImage.hpp"

AlbumImage::AlbumImage() {
    _type = "", _uri = "";
    _width = 0, _albumID = 0, _height = 0;
    cachedType = false, cachedURI = false, cachedWidth = false, cachedHeight = false, cachedAlbumID = false;
}

string AlbumImage::type() {
    if(cachedType)
        return _type;
    cachedType = true;
    return _type = valueForStringAttribute("type");
}

string AlbumImage::uri() {
    if(cachedURI)
        return _uri;
    cachedURI = true;
    return _uri = valueForStringAttribute("uri");
}

unsigned AlbumImage::width() {
    if(cachedWidth)
        return _width;
    cachedWidth = true;
    return _width = valueForIntegerAttribute("width");
}

unsigned AlbumImage::album_id() {
    if(cachedAlbumID)
        return _albumID;
    cachedAlbumID = false;
    return _albumID = valueForIntegerAttribute("album_id");
}

unsigned AlbumImage::height() {
    if(cachedHeight)
        return _height;
    cachedHeight = true;
    return _height = valueForIntegerAttribute("height");
}

void AlbumImage::print() {
    cout << "albumID: " << album_id() << endl;
    cout << "type: " << type() << endl;
    cout << "width: " << width() << endl;
    cout << "height: " << height() << endl;
    cout << "uri: " << uri() << endl;
}

void AlbumImage::writeHTML_AlbumImage(ofstream& ossHTML){
    ossHTML << "<img class=\"image\" width = " << width() << " height = " << height() << " src=\"" << uri()
            << "\">" << endl;

}
