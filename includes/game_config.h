#ifndef GAMECONFIG_H
#define GAMECONFIG_H

#define HERO '*'
#define ENEMY '#'
#define EMPTY '.'

typedef struct {
  int x;
  int y;
  char character;
} Character;

typedef struct {
  Character base;
  int points;
  int power;
} Hero;

typedef struct {
  Character base;
  int intentionX;
  int intentionY;
  int memory;
} Enemy;

typedef struct {
  int width;
  int height;
  char **tiles;
} Map;

#endif
