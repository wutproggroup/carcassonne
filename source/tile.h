//Author: Mateusz Domański



#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>




typedef struct {
    int id;
    char *name[];
    bool isTemple;
    bool crossRoads;
    bool shield;
    Nrc top;
    Nrc right;
    Nrc bottom;
    Nrc left;

} tile;

typedef tile* tile_list_t;
typedef struct {
    tile_list_t list;
    size_t len;
} sized_tlist;
