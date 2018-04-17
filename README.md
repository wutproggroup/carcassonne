# Carcassonne
## College project
Simple carcassone-like game written in c.

## Assumptions for file format and arguments standard


##### For running the game 4 files should be provided:
- carcass.exe 
- tiles 
- available_tiles 
- map

**_if map file is not provided program will generate a new one_**

##### tiles file structure 

To describe every tile we have to use special model so that single line will describe one tile and every tile properties will be written in the same way. Below we have listed informations necessary for us to describe single tile(it's example):
> <dd>{ </dd>
> <dd>id, integer unique for a tile</dd>
> <dd>name, string, only for human readability</dd>
> <dd>isTemple, bool, specifies whether there is a temple on a tile </dd>
> <dd>crossRoads, bool specifies whether there are crossroads on a tile </dd>
> <dd>bonus, specifies if there is a bonus point on a tile </dd>
> <dd>top, 0/1/2      specifies what's on the tile 0-nothing, 1-road, 2-city </dd>
> <dd>right, 0/1/2	^ </dd>
> <dd>bottom, 0/1/2	^ </dd>
> <dd>left, 0/1/2		^ </dd>
> <dd> } </dd>

So single line in the file will look like this:
>id,name,isTemple,crossRoads,bonus,top,right,bottom,left;

Example:
> <dd> { </dd>
> <dd>	1,'Temple with 1 road',1,0,0,0,0,1,0; </dd>
> <dd>	2,'Temple standalone',1,0,0,0,0,0,0; </dd>
> <dd>	3,'City',0,0,1,2,2,2,2; </dd>
> <dd>	4,'Road near a city',0,0,0,1,2,1,0; </dd>
> <dd>	... </dd>
> <dd> } </dd>

Pictures presenting tiles described above: 
<dd> </dd>

[Title 1.png](https://github.com/wutproggroup/carcassonne/blob/master/resources/tiles/1.png)

<dd> </dd>

![Title 2.png](https://github.com/wutproggroup/carcassonne/blob/master/resources/tiles/2.png)

<dd> </dd>

![Title 3.png](https://github.com/wutproggroup/carcassonne/blob/master/resources/tiles/3.png)

<dd> </dd>

![Title 4.png](https://github.com/wutproggroup/carcassonne/blob/master/resources/tiles/4.png)

<dd> </dd>

##### available_tiles file structure

<dd> available_tiles file should contain available tiles  tile_id and to specify </dd>
<dd> it should be list of ids after commas. tile_id is int. </dd>

Example:
> <dd> 1,2,3,4,5... </dd>

##### map file structure

<dd> Map file contains tiles ids and their position on the map. </dd>
<dd> Each line in the files is another row. </dd>
<dd> In every line elements are split by comma sign. </dd>
<dd> If there is no tile there still should be a comma. </dd>


2x2 example without top left tile
> <dd> ,4_3 </dd>
> <dd> 13_1,10_1 </dd>

3x3 example without middle tile
> <dd> 1_1,2_2,2_2 </dd>
> <dd> 3_3,,4_4 </dd>
> <dd> 3_2,1_2,2_1 </dd>
