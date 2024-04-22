#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "game_config.h"
#include <curses.h>
#include <stdio.h>

// mapping commands
#define UP 'w'
#define DOWN 's'
#define LEFT 'a'
#define RIGHT 'd'
#define QUIT 'q'
#define POWER 'j'

char getKeyPress();
void inputHandler(const Map *map, Character *character);

#endif
