cmake_minimum_required(VERSION 3.14)
project(project4)

set(CMAKE_CXX_STANDARD 14)

add_executable(project4 main.cpp Album.cpp Album.hpp Artist.cpp Artist.hpp Track.cpp Track.hpp ArtistImage.cpp ArtistImage.hpp AlbumImage.cpp AlbumImage.hpp  Albums.cpp Albums.hpp Tracks.cpp Tracks.hpp Pair.cpp Pair.hpp JSONDataObject.cpp JSONDataObject.hpp JSONArray.cpp JSONArray.hpp Artists.cpp Artists.hpp Tokenizer.cpp Tokenizer.hpp AlbumImages.cpp AlbumImages.hpp ArtistImages.cpp ArtistImages.hpp WriteHTML.cpp WriteHTML.hpp)