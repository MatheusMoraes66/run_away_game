#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "game_config.h"
#include "utils.h"
#include "redering.h"
#include "keyboard.h"
#include <stdio.h>
#include <stdlib.h>

// map.c
void initializeMapFromFile(Map *map, const char *filename);
void freeMap(Map *map);

// hero.c
void initializeHero(Hero *hero);

// enemy.c
void initializeEnemy(Enemy *enemy);
void toWalk(Map *map, Enemy *enemy);
int collision(Map *map, int x, int y);
void huntedHero(Map *map, Enemy *enemy);
void controlIntention(Map *map, Enemy *enemy, int y, int x);
int analyzingPerspectiveX(Map *map, int x, int y, char targer);
int analyzingPerspectiveY(Map *map, int x, int y, char targer);

#endif
