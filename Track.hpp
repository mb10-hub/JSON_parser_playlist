//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_TRACK_HPP
#define PROJECT4_TRACK_HPP

#include<fstream>
#include<cstring>
#include <vector>
#include<iostream>
#include "JSONDataObject.hpp"
using namespace std;

class Track: public JSONDataObject
{
public:
    Track();
//    ~Track();

    std::string artistName();
    std::string title();
    std::string albumName();
    unsigned albumID();
    std::string duration();
    std::string position();
    void print() override;

    void writeHTML_Tracks(ofstream& ossHTML) override;
    void writeHTML_TrackHeader(ofstream& ossHTML) override;

////    void parseFromJSONstream(std::fstream &stream);
////    std::string htmlString();
////
////
////    void readJSONDataObject(fstream &stream);
////    void writeHTML_Track(vector<Track>&);
////    void readJSONDataItem(fstream &stream);
//    vector<Track> &get_trackVector()  { return tracks; }




private:
    vector<Track> tracks;
    std::string _artistName, _title, _albumName, _duration, _position;
    unsigned _albumID;
    bool cachedName, cachedAlbumName, cachedTitle, cachedDuration, cachedPosition , cachedAlbumID;
};

// need it so that i dont create an instance of Track in main;
void readJSONArrayTrack(fstream &stream);



#endif //PROJECT4_TRACK_HPP
