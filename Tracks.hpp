//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_TRACKS_HPP
#define PROJECT4_TRACKS_HPP
#include <fstream>
#include <cstring>
#include <vector>
#include <iostream>
#include "JSONArray.hpp"
#include "Track.hpp"


class Tracks : public JSONArray
{
public:
//    Tracks();
//    ~Tracks();
//
//    int numTracks();
//    void addTrack(Track *track);
//    Track *trackWithID(unsigned int aID);
    void loadTracksFromFile(std::string fileName);



    //std::string htmlString();
    JSONDataObject *jsonObjectNode() { return new Track();  }
//    void setTracksForTracks(Tracks *tracks);
//    void setImagesForTracks(ArtistImage *); /// idk bout this one


    std::vector<Track *> *listOfTracks() { return (std::vector<Track *> *) _listOfDataObjects; }


//    void runAsserts();  // used for checking the integrity of this class.
};



#endif //PROJECT4_TRACKS_HPP
