//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_ARTISTIMAGE_HPP
#define PROJECT4_ARTISTIMAGE_HPP

#include "JSONArray.hpp"


class ArtistImage : public JSONDataObject{
public:
    ArtistImage();
    //~ArtistImage();
    string type();
    string uri();
    unsigned width();
    unsigned artist_id();
    unsigned height();



    void print() override;


    void writeHTML_ArtistImage(ofstream & ossHTML) override ;

private:
    string _type, _uri;
    unsigned _width, _artist_id, _height;
    bool cachedType, cachedURI, cachedWidth, cachedHeight, cachedArtistID;

};


#endif //PROJECT4_ARTISTIMAGE_HPP
