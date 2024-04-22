#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "game_config.h"
#include "redering.h"
#include "keyboard.h"
#include <stdio.h>
#include <stdlib.h>

// map.c
void initializeMapFromFile(Map *map, const char *filename);
void freeMap(Map *map);

// character.c
void initializeHero(Hero *hero);

#endif
