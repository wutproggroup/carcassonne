# Carcassonne
## College project
Simple carcassone-like game written in c.

## Assumptions for file format and arguments standard


##### For running the game 4 files should be provided:
⋅⋅*carcass.exe 
⋅⋅*tiles 
⋅⋅*available_tiles 
⋅⋅*map

**_if map file is not provided program will generate a new one_**

##### tiles file structure 

To describe every tile we have to use special model so that single line will describe one tile and every tile properties will be written in the same way. Below we have listed informations necessary for us to describe single tile(it's example):
>{
>	id, integer unique for a tile
>	name, string, only for human readability
>	isTemple, bool, specifies whether there is a temple on a tile
>	crossRoads, bool specifies whether there are crossroads on a tile
>	bonus, specifies if there is a bonus point on a tile
>	top, 0/1/2      specifies what's on the tile 0-nothing, 1-road, 2-city
>	right, 0/1/2	^
>	bottom, 0/1/2	^
>	left, 0/1/2		^
>}

So single line in the file will look like this:
>id,name,isTemple,crossRoads,bonus,top,right,bottom,left;

Example:
>{
>	1,'Temple with 1 road',1,0,0,0,0,1,0;
>	2,'Temple standalone',1,0,0,0,0,0,0;
>	3,'City',0,0,1,2,2,2,2;
>	4,'Road near a city',0,0,0,1,2,1,0;
>	...
>}

Pictures presenting tiles described above: 
![alt text](https://github.com/wutproggroup/carcassonne/resources/tiles/1.png "Temple with 1 road")
![alt text](https://github.com/wutproggroup/carcassonne/resources/tiles/2.png "Temple standalone")
![alt text](https://github.com/wutproggroup/carcassonne/resources/tiles/3.png "City")
![alt text](https://github.com/wutproggroup/carcassonne/tiles/resources/tiles/4.png "Road near a city")


##### available_tiles file structure

available_tiles file should contain available tiles tile_id and to specify
it should be list of ids after commas. tile_id is int.

Example:
>1,2,3,4,5...

##### map file structure

Map file contains tiles ids and their position on the map.
Each line in the files is another row.
In every line elements are split by comma sign.
If there is no tile there still should be a comma.


2x2 example without top left tile
>,4_3
>13_1,10_1

3x3 example without middle tile
>1_1,2_2,2_2
>3_3,,4_4
>3_2,1_2,2_1
