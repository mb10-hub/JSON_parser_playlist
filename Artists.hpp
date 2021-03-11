//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_ARTISTS_HPP
#define PROJECT4_ARTISTS_HPP

//#include "JSONArray.hpp"
#include "Artist.hpp"
#include "Albums.hpp"
#include <fstream>
#include <cstring>
#include <vector>
#include <iostream>
#include "ArtistImage.hpp"


using namespace std;


class Artists: public JSONArray
{
public:
//    Artists();
//    ~Artists();
//
//    int numArtists();
//    void addArtist(Artist *artist);
//    Artist *artistWithID(unsigned int aID);
    void loadArtistsFromFile(std::string fileName);



    //std::string htmlString();
    JSONDataObject *jsonObjectNode() { return new Artist();  }
//    void setAlbumsForArtists(Albums *albums);
//    void setImagesForArtists(ArtistImage *);


    std::vector<Artist *> *listOfArtists() { return (std::vector<Artist *> *) _listOfDataObjects; }


//    void runAsserts();  // used for checking the integrity of this class.
};





#endif //PROJECT4_ARTISTS_HPP
