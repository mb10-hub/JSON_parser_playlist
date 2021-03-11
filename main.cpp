#include <iostream>
#include "Artists.hpp"
#include "Albums.hpp"
#include "Tracks.hpp"
#include "AlbumImages.hpp"
#include "ArtistImages.hpp"
//#include "WriteHTML.hpp"



using namespace std;



int main(int argc, char *argv[]) {

    if ( argc != 6)
    {
        cout << "ERROR: reading the input files" << endl;
        exit(1);
    }

///ALL GOOD WITH READING DATA FOR ARTIST

    Artists *artists = new Artists();
    artists->loadArtistsFromFile(argv[1]);
    //artists->print();

///All good with reading data for albums
    Albums *albums = new Albums();
    albums->loadAlbumsFromFile(argv[2]);
    //albums->print();

///ALL GOOD WITH TRACKS
    Tracks *tracks = new Tracks();
    tracks->loadTracksFromFile(argv[3]);
    //tracks->print();

/// ALL GOOD WITH ARTIST_IMAGES
    ArtistImages *artistImages = new ArtistImages();
    artistImages->loadArtistsFromFile(argv[4]);
    //artistImages->print();

/// ALL GOOD FOR ALBUM_IMAGES
    AlbumImages *albumImages = new AlbumImages();
    albumImages->loadArtistsFromFile(argv[5]);
    //albumImages->print();


///set vectors




    ///Write HTML
    WriteHTML writeHtml;
    writeHtml.WriteHTML_AlbumImages(albumImages->listOfDataObjects());
    writeHtml.WriteHTML_ArtistImages(artistImages->listOfDataObjects());
    writeHtml.WriteHTML_Tracks(tracks->listOfDataObjects());
    writeHtml.WriteHTML_Albums(albums->listOfDataObjects());
    writeHtml.WriteHTML_Artists(artists->listOfDataObjects());


    return 0;
}
