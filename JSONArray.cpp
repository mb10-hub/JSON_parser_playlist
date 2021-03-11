//
// Created by Marco Barragan on 4/24/20.
//

#include "JSONArray.hpp"

JSONArray::JSONArray() {
    _listOfDataObjects = new vector<JSONDataObject *>;
}

void JSONArray::parseJSONArray(Tokenizer *tokenizer) {
    {
        Token token = tokenizer->getToken();
        if( ! token.isOpenSquareBracket() )
        {
            cout << "ERROR: expected an [ " << endl;
            exit(1);
        }

            do {
                JSONDataObject *dItem = jsonObjectNode();
                dItem->parseDataObject(tokenizer, token);
                _listOfDataObjects->push_back(dItem);
                token = tokenizer->getToken();
//                if( ! token.isCloseSquareBracket() ||  ! token.isComma() )
//                {
//                    cout << "ERROR: expected a ] or , " << endl;
//                    exit(2);
//                }

            } while( ! token.isCloseSquareBracket() );
    }

}

void JSONArray::print() {


    for (auto& objects : *_listOfDataObjects) {
        objects->print();
        cout << endl;
    }

}

void JSONArray::writeHTMLName(ofstream &ossHTML) {

    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTMLName(ossHTML);
    }

}

void JSONArray::writeHTML_ArtistImage(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_ArtistImage(ossHTML);
    }

}

void JSONArray::writeHTML_ArtistInfo(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_ArtistInfo(ossHTML);
    }

}

void JSONArray::writeHTML_AlbumTitle(ofstream &ossHTML) {

    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_AlbumTitle(ossHTML);
    }
}

void JSONArray::writeHTML_AlbumImage(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_AlbumImage(ossHTML);
    }

}

void JSONArray::writeHTML_AlbumInfo(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_AlbumInfo(ossHTML);
    }
}

void JSONArray::writeHTML_Tracks(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_Tracks(ossHTML);
    }
}

void JSONArray::writeHTML_TrackHeader(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_TrackHeader(ossHTML);
    }

}

void JSONArray::writeHTML_AlbumHeader(ofstream &ossHTML) {
    for (auto& objects : *_listOfDataObjects) {
        objects->writeHTML_AlbumHeader(ossHTML);
    }

}




