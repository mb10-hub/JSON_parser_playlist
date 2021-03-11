// Created by Marco Barragan on 4/7/20.
//

#include "Artist.hpp"
#include "Track.hpp"

Artist::Artist() {
     _name = "", _realName = "", _profile = "",  _numImages ="";
    _artistID = 0;
    cachedName = false, cachedRealName = false, cachedProfile = false, cachedNumImages = false, cachedArtistID = false;

}


std::string Artist::profile() {

    if( cachedProfile )
        return _profile;
    cachedProfile = true;
    return _profile = valueForStringAttribute("profile");

}

std::string Artist::name() {
    if(cachedName)
        return _name;
    cachedName = true;
    return _name = valueForStringAttribute("artist_name");
}

string Artist::realName() {
    if(cachedRealName)
        return _realName;
    cachedRealName = true;
    return _realName = valueForStringAttribute("real_name");
}

string Artist::numImages() {
    if(cachedNumImages)
        return _numImages;
    cachedNumImages = true;
    return _numImages = valueForStringAttribute("num_images");
}

unsigned Artist::artistID() {
    if(cachedArtistID)
        return _artistID;
    cachedArtistID = true;
    return _artistID = valueForIntegerAttribute("artist_id");

}

void Artist::print() {

    cout << "num_images: " << numImages() << endl;
    cout << "artist_id: " << artistID() << endl;
    cout << "profile: " << profile() << endl;
    cout << "real_name" << realName() << endl;
    cout << "artist_name: " << name() << endl;


}

void Artist::writeHTMLName(ofstream& ossHTML) {
    ossHTML << "<h2>" << name() << "</h2>" << endl;

}

void Artist::writeHTML_ArtistInfo(ofstream &ossHTML) {
    ossHTML << "\t<table class=\"artistInfo\">" << endl;
    ossHTML << "\t\t<tr>" << endl;
    ossHTML << "\t\t<td class=\"tagName\">Number of Images:</td>" << endl;
    ossHTML << "\t\t<td class=\"value\">" << numImages() << "</td>";
    ossHTML << "\t</tr>" << endl;
    ossHTML << "\t<tr><td>Profile:</td>" << endl;
    ossHTML << "\t\t<td class=\"value\">" << profile() << endl;
    ossHTML << "\t\t</td>" << endl;
    ossHTML << "\t\t</tr>" << endl;
    ossHTML << "\t\t</table>" << endl;
    ossHTML << "\t<div class=\"clear\">&nbsp;</div>" << endl;

//    ossHTML << "\tclass=\"artistInfo\"><tr><td class=\"tagName\">Number of Images:</td><td class=\"value\">"
//    << numImages() << "</td></tr><tr><td>Profile:</td><td class=\"value\">" << profile()
//    << "<div class=\"clear\">&nbsp;</div>" << endl;
//    ossHTML << "\t<h2>Albums</h2><ol><li>" << endl;

}




















