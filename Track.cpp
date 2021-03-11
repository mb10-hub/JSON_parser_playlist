//
// Created by Marco Barragan on 4/24/20.
//

#include "Track.hpp"


Track::Track() {
    _artistName = "", _title = "", _albumName = "", _duration = "", _position = "";
    _albumID = 0;
    cachedName = false, cachedAlbumName = false, cachedTitle = false, cachedDuration = false, cachedPosition = false;
    cachedAlbumID = false;
}

string Track::artistName() {
    if( cachedName )
        return _artistName;
    cachedName = true;
    return _artistName = valueForStringAttribute("artist_name");
}

string Track::title() {
    if(cachedTitle)
        return _title;
    cachedTitle = true;
    return _title = valueForStringAttribute("title");
}

string Track::albumName() {
    if (cachedAlbumName)
        return _albumName;
    cachedAlbumName = true;
    return _albumName = valueForStringAttribute("album_name");
}

string Track::duration() {
    if(cachedDuration)
        return _duration;
    cachedDuration = true;
    return _duration = valueForStringAttribute("duration");
}

string Track::position() {
    if(cachedPosition)
        return _position;
    cachedPosition = true;
    return _position = valueForStringAttribute("position");
}

unsigned Track::albumID() {
    if(cachedAlbumID)
        return _albumID;
    cachedAlbumID = true;
    return _albumID = valueForIntegerAttribute("album_id");
}

void Track::print() {
    cout << "artist_name: " << artistName() << endl;
    cout << "title: " << title() << endl;
    cout << "album_name: " << albumName() << endl;
    cout << "duration: " << duration() << endl;
    cout << "position: " << position() << endl;
    cout << "album_id: " << albumID() << endl;
}



void Track::writeHTML_TrackHeader(ofstream &ossHTML) {
    ossHTML << "<h2>Tracklist</h2>";
}

void Track::writeHTML_Tracks(ofstream &ossHTML) {

    //ossHTML << "<ol><li>" << endl;
    ossHTML << "<table class=\"tracks\"><tr class=\"tracks\"><td class=\"trackName\">" << title()
    << "</td><td>" << duration() << "</td></tr></table>" <<endl;

//    ossHTML << "<table class=\"tracks\"><tr class=\"tracks\"><td class=\"trackName\">" << title()
//    << "</td><td>" << duration() << "</td></tr>" << endl;
}

