//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_ARTIST_HPP
#define PROJECT4_ARTIST_HPP


#include<fstream>
#include<cstring>
#include <vector>
#include <iostream>
#include "JSONDataObject.hpp"
#include "Pair.hpp"
#include "Albums.hpp"
//#include "ArtistImage.hpp"
//#include "ArtistImages.hpp"
#include "WriteHTML.hpp"
//#include <string>

using namespace std;

class Artist: public JSONDataObject
{
public:
    Artist(); /// maybe need implamentation

//    ~Artist();

    std::string profile();
    std::string name();
    std::string realName();
    string    numImages();

    unsigned    artistID();
    void print() override ;
    void writeHTMLName(ofstream& ossHTML) override ;
    virtual void writeHTML_ArtistInfo(ofstream & ossHTML) override ;





////    void writeHTML_Artist(vector<Artist>&);
//
//    vector<Artist> &get_artistVector()  { return artists; }
//
//    void setAlbums(Albums *albums)      { _albums = albums; }
//    Albums *albums()                    { return _albums; }
//    ArtistImage *&primaryImage()        { return _primaryImage;   }
//    ArtistImage *&secondaryImage()      { return _secondaryImage; }
//
//
private:
    //vector<Artist> artists;
    std::string _name, _realName, _profile,  _numImages;
    unsigned _artistID;
    bool cachedName, cachedRealName, cachedProfile, cachedNumImages, cachedArtistID;
    vector<JSONDataObject *>*_objectsArtists;
//    ArtistImage *_primaryImage, *_secondaryImage;
//    Albums *_albums;

};

//// need it so that i dont create an instance of artist in main;
//void readJSONArrayArtist(fstream &stream);





#endif //PROJECT03_ARTIST_HPP
