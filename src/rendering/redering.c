#include "../../includes/redering.h"

void renderMap(const Map *map) {
  for (int i = 0; i < map->height; i++) {
    printf("%s", map->tiles[i]);
  }
}

void updateMap(const Map *map, Character *personage) {
     if(map->tiles[personage->x][personage->y] == EMPTY) {
         foundCharacter(map, personage->character);
            map->tiles[personage->x][personage->y] = personage->character;
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
