//
// Created by Marco Barragan on 5/4/20.
//

#ifndef PROJECT4_ARTISTIMAGES_HPP
#define PROJECT4_ARTISTIMAGES_HPP

#include "JSONArray.hpp"
#include "AlbumImage.hpp"


class ArtistImages : public JSONArray{
public:
    ArtistImages();
//    ~ArtistImages();
//
//    int numArtistImage;
//    void addArtistImage(ArtistImage *artistImage);
//    Artist *artistWithID(unsigned int aID);
    void loadArtistsFromFile(std::string FileName);

    ArtistImages *artistImagesWithID(int artistID);

    //std::string htmlString();
    JSONDataObject *jsonObjectNode() { return new ArtistImage();  }
//    void setAlbumsForArtists(Albums *albums);
//    void setImagesForArtists(ArtistImage *);
    //void setVectorArtistImages(vector<ArtistImage *>*);




    std::vector<ArtistImage *> *listOfArtistImage() { return (std::vector<ArtistImage *> *) _listOfDataObjects; }


//    void runAsserts();  // used for checking the integrity of this class.

private:
    //vector<ArtistImage *> *objectsOfArtistImages;

};


#endif //PROJECT4_ARTISTIMAGES_HPP
