//
// Created by Marco Barragan on 4/24/20.
//

#include "JSONDataObject.hpp"


JSONDataObject::JSONDataObject() {
    _listOfDataItems = new vector<Pair *>;

}

void JSONDataObject::parseDataObject(Tokenizer *tokenizer, Token& token) {

    /// consume the { } , { } , characters
    token = tokenizer->getToken();

    if (!token.isOpenCurlyBrace())
    {
        cout << "ERROR with reading object in the JSON file \n Expected a { " << endl;
        exit(3);

    }
    do
        {
            /// not sure if this is how i want to call parsePair
            Pair *pair = new Pair;
            pair->parsePair(tokenizer, token);
            _listOfDataItems->push_back(pair);

        }
    while(!token.isCloseCurlyBrace());


}

std::string JSONDataObject::valueForStringAttribute(std::string s) {


    for (auto& pair : *_listOfDataItems)
    {
        if ( s == pair->attributeName() )
        {
            return pair->stringValue();
        }

    }

    return "NOT FOUND";
}

int JSONDataObject::valueForIntegerAttribute(std::string s) {

    for (auto& pair : *_listOfDataItems)
    {
        if ( s == pair->attributeName() )
        {
            return pair->numberValue();
        }

    }

    return -1111;
}

void JSONDataObject::print() {
      cout << "JSONdAtaobjectprint" << endl;
//    for (auto& pair : *_listOfDataItems)
//    {
//        if (pair->isNumber())
//        {
//            cout << pair->attributeName() << ": " << pair->numberValue() << endl;
//            cout << pair->attributeName() << ": " << pair->numberValue() << endl;
//        }
//        else
//            {
//                cout << pair->attributeName() << ": " << pair->stringValue() << endl;
//            }
//    }
}

void JSONDataObject::writeHTMLName(ofstream &ossHTML) {
    cout << "JSONDataObjectHTML" << endl;

}

void JSONDataObject::writeHTML_ArtistImage(ofstream &ossHTML) {
    cout << "JSONDataObject_ArtistImagesHTML" << endl;

}

void JSONDataObject::writeHTML_ArtistInfo(ofstream &ossHTML) {
    cout << "JSONDATAObject_ArtistInfoHTML" << endl;
}

void JSONDataObject::writeHTML_AlbumTitle(ofstream &ossHTML) {
    cout <<  "JSONDataObject_AlbumTitle" << endl;
}

void JSONDataObject::writeHTML_AlbumImage(ofstream &ossHTML) {
    cout << "JSONDataObject_AlbumImages" << endl;

}

void JSONDataObject::writeHTML_AlbumInfo(ofstream &ossHTML) {
    cout << "JSONDataObject_AlbumInfo" << endl;

}

void JSONDataObject::writeHTML_Tracks(ofstream &ossHTML) {
    cout << "JSONDataObject_TracksHTML" << endl;

}

void JSONDataObject::writeHTML_TrackHeader(ofstream &ossHTML) {

}

void JSONDataObject::writeHTML_AlbumHeader(ofstream &ossHTML) {
    cout << "JSONDataObject_AlbumHeader" << endl;

}


