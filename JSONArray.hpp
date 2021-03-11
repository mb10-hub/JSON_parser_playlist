//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_JSONARRAY_HPP
#define PROJECT4_JSONARRAY_HPP
#include "Pair.hpp"
#include "Tokenizer.hpp"
#include <iostream>
#include "JSONDataObject.hpp"
#include "ArtistImage.hpp"
#include <vector>

using namespace std;

class JSONArray {
public:
    JSONArray();
//    ~JSONArray();
    std::vector<JSONDataObject *> *listOfDataObjects() { return _listOfDataObjects; }
    virtual JSONDataObject *jsonObjectNode() = 0;
    int numJSONObjects()                               { return _listOfDataObjects->size(); }
    void parseJSONArray(Tokenizer *tokenizer);
    virtual void print();


    virtual void writeHTMLName(ofstream& ossHTML);
    virtual void writeHTML_ArtistImage(ofstream & ossHTML);
    virtual void writeHTML_ArtistInfo(ofstream & ossHTML);
    virtual void writeHTML_AlbumTitle(ofstream& ossHTML);
    virtual void writeHTML_AlbumImage(ofstream& ossHTML);
    virtual void writeHTML_AlbumInfo(ofstream& ossHTML);
    virtual void writeHTML_Tracks(ofstream& ossHTML);
    virtual void writeHTML_TrackHeader(ofstream& ossHTML);
    virtual void writeHTML_AlbumHeader(ofstream& ossHTML);






protected:
    std::vector<JSONDataObject *> *_listOfDataObjects;

};


#endif //PROJECT4_JSONARRAY_HPP
