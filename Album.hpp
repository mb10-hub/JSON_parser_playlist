//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_ALBUM_HPP
#define PROJECT4_ALBUM_HPP


#include<fstream>
#include<cstring>
#include <vector>
#include<iostream>
#include "JSONDataObject.hpp"
#include "Tracks.hpp"
#include "AlbumImage.hpp"
//#include "Artist.hpp" //causes errors when include


using namespace std;

class Artist;
class Album: public JSONDataObject {
public:
    Album();
//    //~Album();

    std::string title();
    std::string genres();
    unsigned albumID();
    unsigned artistID();
    unsigned numImages();
    unsigned numTracks();
    std::string year();

    void print() override ;

    void writeHTML_AlbumTitle(ofstream& ossHTML) override;
    void writeHTML_AlbumInfo(ofstream& ossHTML) override;
    void writeHTML_AlbumHeader(ofstream& ossHTML)override ;

//
//    void setTracks(Tracks *tracks);
//    void setArtist(Artist *artist);
//    Artist *artist();
////    Tracks *tracks()  { return _tracks; }
////
////    AlbumImage *&primaryImage() { return _primaryAlbumImage;   }
////    AlbumImage *&secondaryImage()  { return _secondaryAlbumImage; }
//

//    std::string htmlString();
private:
    string _title, _genres, _year;
    unsigned _albumID, _artistID, _numImages, _numTracks;
    bool cachedTitle, cachedGenres, cachedAlbumID, cachedArtistID, cachedNumImages, cachedNumTracks, cachedYear;
};


#endif //PROJECT4_ALBUM_HPP
