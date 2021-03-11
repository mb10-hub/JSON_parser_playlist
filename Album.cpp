// Created by Marco Barragan on 4/7/20.
//
#include "Album.hpp"

//Album::Album() {
//
//}

Album::Album() {
    _title = "", _genres = "", _year = "";
    _albumID = 0, _artistID = 0, _numImages = 0, _numTracks = 0;
    cachedTitle = false, cachedGenres = false, cachedAlbumID = false, cachedArtistID = false,
    cachedNumImages = false, cachedNumTracks = false, cachedYear = false;

}
string Album::title() {
    if(cachedTitle)
        return _title;
    cachedTitle = false;
    return _title = valueForStringAttribute("title");
}

string Album::genres() {
    if(cachedGenres)
        return _genres;
    cachedGenres = false;
    return _genres = valueForStringAttribute("genres");
}

string Album::year() {
    if(cachedYear)
        return _year;
    cachedYear = true;
    return _year = valueForStringAttribute("year");
}

unsigned Album::albumID() {
    if(cachedAlbumID)
        return _albumID;
    cachedAlbumID = true;
    return _albumID = valueForIntegerAttribute("album_id");
}

unsigned Album::artistID() {
    if(cachedArtistID)
        return _artistID;
    cachedArtistID = true;
    return _artistID = valueForIntegerAttribute("artist_id");
}

unsigned Album::numImages() {
    if(cachedNumImages)
        return _numImages;
    cachedNumImages = true;
    return _numImages = valueForIntegerAttribute("num_images");
}

unsigned Album::numTracks() {
    if(cachedNumTracks)
        return _numTracks;
    cachedNumTracks = true;
    return _numTracks = valueForIntegerAttribute("num_tracks");
}

void Album::print() {
    cout << "album_id: " << albumID() << endl;
    cout << "num_tracks: " << numTracks() << endl;
    cout << "artist_id: " << artistID() << endl;
    cout << "title: " << title() << endl;
    cout << "genres: " << genres() << endl;
    cout << "year: " << year() << endl;
    cout << "num_images: " << numImages() << endl;
}

void Album::writeHTML_AlbumTitle(ofstream& ossHTML){

    ossHTML << "\t\t<p><strong>" << title() << "</strong></p>" << endl;

}

void Album::writeHTML_AlbumInfo(ofstream &ossHTML) {

    ossHTML << "\t\t<table class=\"albumInfo\"><tr><td class=\"aTitle\" colspan=2>" << title()
    << "</td></tr><tr><td class=\"tdNarrow\">Genres:</td><td class=\"value\">" << genres()
    << "</td></tr><tr><td>Year:</td><td class=\"value\">" << year() << "</td></tr></table>" <<endl;
    ossHTML << "\t<div class=\"clear\">&nbsp;</div>" << endl;
//    ossHTML << "\tclass=\"albumInfo\"><tr><td class=\"aTitle\" colspan=2>" << title() << "/td><td " << endl;
//    ossHTML << "\tclass=\"tdNarrow\">Genres:</td><td class=\"value\">" << genres() << "/td> "
//    << "<td>Year:</td><td class=\"value\">" << year() << "</td></tr></table>"; // maybe no space in v c

}

void Album::writeHTML_AlbumHeader(ofstream &ossHTML) {
    ossHTML << "\t<h2>Albums</h2>" << endl;
    //ossHTML << "\t<ol><li>" << endl;
    ossHTML << "\t\t<p><strong>" << title() << "</strong></p>" << endl;
}
