#ifndef REDERING_H
#define REDERING_H

#include "game_config.h"
#include <stdio.h>

void renderMap(const Map *map);
void updateMap(const Map *map, int x, int y, char character);
void foundCharacter(const Map *map, char character);

#endif
