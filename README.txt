C++ Program that parses through JSON Files and organizes the data by grouping relevant Data together. Output an html file with the organized data.

------------------------Introduction------------------------
This project is based on your project 3. For that project, you created a number of C++ objects to represent entities such as artists, albums, and tracks, for a music database. As you recall, the input for that project was encoded in JSON. Even though the number of attributes and the attribute-names for each of these entities were different, the JSON files that provided the input were structurally identical. That is, each file contained a JSON array whose elements were JSON Data Objects. Each such Object consisted of a list of JSON Data Pairs. For this project, you will write an application that is based on your Project 3 and is structured in such a way that it takes advantage of the similarities in input files and the operations that Artist, Album and Track support.
------------------------Features That Work------------------------
IMPORTANT *****
to RUN compile like this :
       	 g++ -std=c++17 *.cpp -o x
Files need to be in order:
	./x artists.json albums.json tracks.json artistImages.json albumImages.json 
       

get files in subdirectories HTML_files
1) master.html    nearly the same as your example
2) directory Albums_HTML_files where all the albums are stored
------------------------Features That Do Not Work------------------------
This program does not support user input or output to console
------------------------Possible Bugs------------------------
if you enter the files in order there should be no bugs.


	
