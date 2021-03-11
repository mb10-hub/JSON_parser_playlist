//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_ALBUMS_HPP
#define PROJECT4_ALBUMS_HPP
#include "JSONArray.hpp"
#include "Album.hpp"
#include <fstream>
#include <cstring>
#include <vector>
#include <iostream>


class Albums : public JSONArray {
public:
//    Albums();
//    ~Albums();
//
//    int numAlbums();
//    void addAlbum(Album *albums);
//    Album *albumWithID(unsigned int aID);
    void loadAlbumsFromFile(std::string fileName);



    //std::string htmlString();
    JSONDataObject *jsonObjectNode() { return new Album();  }
///    void setAlbumsForArtists(Albums *albums); **** no Idea
///    void setImagesForArtists(ArtistImage *); *******no Idea


    std::vector<Album *> *listOfAlbums() { return (std::vector<Album *> *) _listOfDataObjects; }


//    void runAsserts();  // used for checking the integrity of this class.

};


#endif //PROJECT4_ALBUMS_HPP
