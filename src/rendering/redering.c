#include "../../includes/redering.h"

void renderMap(const Map *map) {
  for (int i = 0; i < map->height; i++) {
    printf("%s", map->tiles[i]);
  }
}

void updateMap(const Map *map, int x, int y, char character) {
     if(map->tiles[x][y] == EMPTY) {
         foundCharacter(map, character);
            map->tiles[x][y] = character;
     }
}

void foundCharacter(const Map *map, char character) {
    for (int x = 0; x < map->height; x++) {
        for (int y = 0; y < map->width; y++) {
            if(map->tiles[x][y] == character){
                map->tiles[x][y] = EMPTY;
            }
        }
    }
}
