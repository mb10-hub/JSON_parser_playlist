//
// Created by Marco Barragan on 5/5/20.
//

#include "WriteHTML.hpp"


WriteHTML::WriteHTML() {

    ossHTML.open("./HTML_files/master.html");

    ossHTML << "<!DOCTYPE html>" << endl;
    ossHTML << "<html>" << endl;
    ossHTML << "<head>" << endl;
    ossHTML << "<style>" << endl;
    ossHTML << "      html {\n"
               "         width: 1000px;\n"
               "      }" << endl;
    ossHTML << "      img.image {\n"
               "         float: left;\n"
               "      }" << endl;
    ossHTML << "      table.albumInfo {\n"
               "         margin: 20px 20px;\n"
               "         float: left;\n"
               "      }" << endl;
    ossHTML << "      td.aTitle {\n"
               "         colspan: 2;\n"
               "         font-family: serif;\n"
               "         font-style: bold italic;\n"
               "         font-size: 2.0em;\n"
               "      }" << endl;
    ossHTML << "            td.tagName {\n"
               "         width: 150px;\n"
               "         text-align: bottom;\n"
               "      }" << endl;
    ossHTML << "      td.value {\n"
               "         color: blue;\n"
               "      }" << endl;
    ossHTML << "      div.clear { clear: both; }" << endl;
    ossHTML << "      table.tracks td {\n"
               "         border: collapse;\n"
               "         border-top: 1px solid red;\n"
               "      }" << endl;
    ossHTML << "      tr.tracks {\n"
               "         border: 3px solid red;\n"
               "      }" << endl;
    ossHTML << "       td.trackName {\n"
               "         width: 350px;\n"
               "         padding: 8px;\n"
               "\n"
               "      }" << endl;
    ossHTML << "    </style>" << endl;
    ossHTML << "<title>Artists</title>" << endl;
    ossHTML << "</head>" << endl;
    ossHTML << "</head>" << endl;
    ossHTML << "<body>" << endl;



}

void WriteHTML::WriteTOHTMLArtists() {

    unsigned ArtistID;
        for (auto& objects : *VectorArtists)
        {

            objects->writeHTMLName(ossHTML);
            ArtistID = objects->valueForIntegerAttribute("artist_id");
            findArtistImages(ArtistID);
            ///call to print the rest of the artist info class dfhdi artist info
            objects->writeHTML_ArtistInfo(ossHTML);
            ossHTML << "\t<h2>Albums</h2>" << endl;
            ossHTML << "\t<ol><li>" << endl;
            findAlbums(ArtistID);

//        objects->print();
//
//        ArtistID = objects->valueForIntegerAttribute("artist_id");
//        cout << "Artist_Images: " << endl;
//        findArtistImages(ArtistID);
//        cout << endl;
//        cout << "Albums: " << endl;
//        findAlbums(ArtistID);
//        cout << endl;
       }

    ossHTML << "</body>" << endl;

        ossHTML << "</html>" << endl;

    ossHTML.close();
}

void WriteHTML::findArtistImages(unsigned key) {
    unsigned ArtistID;
    string primary = "primary";
    bool isPrimary = false;
    for (auto& objects : *VectorArtistImages)
    {
        ArtistID = objects->valueForIntegerAttribute("artist_id");
        if (ArtistID == key)
        {
            // Precedence to primary Artist_image
            if(primary == objects->valueForStringAttribute("type"))
            {

                objects->writeHTML_ArtistImage(ossHTML);
                isPrimary = true;
            }
            if(!isPrimary)
            {
                objects->writeHTML_ArtistImage(ossHTML);
            }
        }

    }

}

void WriteHTML::findAlbums(unsigned key) {

    string Album_HTML_file = "./HTML_files/albums_HTML_files/";
    unsigned ArtistID;
    unsigned AlbumID;
    for (auto& objects : *VectorAlbums)
    {
        ArtistID = objects->valueForIntegerAttribute("artist_id");
        if (ArtistID == key)
        {
            objects->writeHTML_AlbumTitle(ossHTML);
            AlbumID = objects->valueForIntegerAttribute("album_id");
            findAlbumImages(AlbumID);
            objects->writeHTML_AlbumInfo(ossHTML);
            //objects->writeHTML_TrackHeader(ossHTML);
            ossHTML << "<h2>Tracklist</h2>" << endl;
            findTracks(AlbumID);
            ossHTML << "</li></ol>" << endl;


            string str = to_string(AlbumID);
            std::string subfile_name = Album_HTML_file + str + ".html";
            ossAlbums_HTML.open(subfile_name);
            objects->writeHTML_AlbumTitle(ossAlbums_HTML);
            findAlbumImages_ALBUMS_HTML(AlbumID);
            objects->writeHTML_AlbumInfo(ossAlbums_HTML);
            findTracks_ALBUMS_HTML(AlbumID);
            ossAlbums_HTML.close();

//            objects->print();
//            AlbumID = objects->valueForIntegerAttribute("album_id");
//            cout<<"Album Images: " << endl;
//            findAlbumImages(AlbumID);
//            findTracks(AlbumID);

        }

    }

}

void WriteHTML::findAlbumImages(unsigned key) {

    unsigned AlbumID;
    string primary = "primary";
    bool isPrimary = false;
    for (auto& objects : *VectorAlbumImages)
    {
        AlbumID = objects->valueForIntegerAttribute("album_id");
        if (AlbumID == key)
        {
            // Precedence to primary Artist_image
            if(primary == objects->valueForStringAttribute("type"))
            {
                objects->writeHTML_AlbumImage(ossHTML);
                isPrimary = true;
            }
            if(!isPrimary)
            {
                objects->writeHTML_AlbumImage(ossHTML);
            }
        }

    }

}

void WriteHTML::findTracks(unsigned key) {

    unsigned AlbumID;
    for(auto& objects : *VectorTracks)
    {
        AlbumID = objects->valueForIntegerAttribute("album_id");
        if (AlbumID == key)
        {
            objects->writeHTML_Tracks(ossHTML);
        }
    }

}

void WriteHTML::findAlbumImages_ALBUMS_HTML(unsigned key) {
    unsigned AlbumID;
    string primary = "primary";
    bool isPrimary = false;
    for (auto& objects : *VectorAlbumImages)
    {
        AlbumID = objects->valueForIntegerAttribute("album_id");
        if (AlbumID == key)
        {
            // Precedence to primary Artist_image
            if(primary == objects->valueForStringAttribute("type"))
            {
                objects->writeHTML_AlbumImage(ossAlbums_HTML);
                isPrimary = true;
            }
            if(!isPrimary)
            {
                objects->writeHTML_AlbumImage(ossAlbums_HTML);
            }
        }

    }

}

void WriteHTML::findTracks_ALBUMS_HTML(unsigned key) {

    unsigned AlbumID;
    for(auto& objects : *VectorTracks)
    {
        AlbumID = objects->valueForIntegerAttribute("album_id");
        if (AlbumID == key)
        {
            objects->writeHTML_Tracks(ossAlbums_HTML);
        }
    }
}


