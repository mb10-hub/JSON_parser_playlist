//
// Created by Marco Barragan on 4/24/20.
//

#ifndef PROJECT4_JSONDATAOBJECT_HPP
#define PROJECT4_JSONDATAOBJECT_HPP

#include "Pair.hpp"
#include <iostream>
#include "Tokenizer.hpp"
#include <vector>

using namespace std;

class JSONDataObject {
public:
    JSONDataObject();


//    virtual ~JSONDataObject();
    std::vector<Pair *> *listOfDataItems() { return _listOfDataItems; }
    void parseDataObject(Tokenizer *, Token&);
    virtual void print();
    std::string valueForStringAttribute(std::string s);
    int valueForIntegerAttribute(std::string s);

    virtual void writeHTMLName(ofstream& ossHTML);
    virtual void writeHTML_ArtistImage(ofstream & ossHTML);
    virtual void writeHTML_ArtistInfo(ofstream & ossHTML);
    virtual void writeHTML_AlbumTitle(ofstream& ossHTML);
    virtual void writeHTML_AlbumImage(ofstream& ossHTML);
    virtual void writeHTML_AlbumInfo(ofstream& ossHTML);
    virtual void writeHTML_Tracks(ofstream& ossHTML);
    virtual void writeHTML_TrackHeader(ofstream& ossHTML);
    virtual void writeHTML_AlbumHeader(ofstream& ossHTML);



private:
    std::vector<Pair *> *_listOfDataItems;

};


#endif //PROJECT4_JSONDATAOBJECT_HPP
