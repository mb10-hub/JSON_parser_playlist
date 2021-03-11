//
// Created by Marco Barragan on 5/4/20.
//

#ifndef PROJECT4_ALBUMIMAGES_HPP
#define PROJECT4_ALBUMIMAGES_HPP

#include "JSONArray.hpp"
#include "AlbumImage.hpp"


class AlbumImages : public JSONArray {
public:
    void loadArtistsFromFile(std::string FileName);
    JSONDataObject *jsonObjectNode() { return new AlbumImage();  }
    std::vector<AlbumImage *> *listOfAlbumImage() { return (std::vector<AlbumImage *> *) _listOfDataObjects; }

};


#endif //PROJECT4_ALBUMIMAGES_HPP
