#ifndef Map_H
#define Map_H

#include "LinkedList.h"

typedef struct Map Map;

struct Map {
  int size;
  LinkedList **table;
};

Map *createMap(int size);
void *destroyMap(Map *map);
void addMap(Map *map, void *data, int (*hash)(void *data));
void *findMap(Map *map, void *data, int (*hash)(void *data)); // return the data that you had found
void *delMap(Map *map, void *data, int (*hash)(void *data)); // return the data that you deleted

#endif // Map_H
