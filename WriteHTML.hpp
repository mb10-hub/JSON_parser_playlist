//
// Created by Marco Barragan on 5/5/20.
//

#ifndef PROJECT4_WRITEHTML_HPP
#define PROJECT4_WRITEHTML_HPP
//
#include "JSONArray.hpp"
#include <vector>
#include <fstream>

class WriteHTML {
public:
    WriteHTML();

    inline void WriteHTML_AlbumImages(vector<JSONDataObject *>*_objects)       { VectorAlbumImages = _objects; }
    inline void WriteHTML_ArtistImages(vector<JSONDataObject *>*_objects)      { VectorArtistImages = _objects;}
    inline void WriteHTML_Tracks(vector<JSONDataObject *>*_objects)            { VectorTracks = _objects; }
    inline void WriteHTML_Albums(vector<JSONDataObject *>*_objects)            { VectorAlbums = _objects; }
    inline void WriteHTML_Artists(vector<JSONDataObject *>*_objects) { VectorArtists = _objects; WriteTOHTMLArtists();}
//

    void WriteTOHTMLArtists();
    void findArtistImages(unsigned);
    void findAlbums(unsigned);
    void findAlbumImages(unsigned);
    void findTracks(unsigned);
    void findAlbumImages_ALBUMS_HTML(unsigned);
    void findTracks_ALBUMS_HTML(unsigned);

private:
    const vector<JSONDataObject *>* VectorAlbumImages;
    const vector<JSONDataObject *>* VectorArtistImages;
    const vector<JSONDataObject *>* VectorTracks;
    const vector<JSONDataObject *>* VectorAlbums;
    const vector<JSONDataObject *>* VectorArtists;

    ofstream ossHTML;
    ofstream ossAlbums_HTML;



};












#endif //PROJECT4_WRITEHTML_HPP
