#include "../../includes/game_logic.h"

void initializeEnemy(Enemy *enemy)
{
  enemy->base.x = 5;
  enemy->base.y = 5;
  enemy->base.character = ENEMY;
}

void huntedHero(Map *map, Enemy *enemy)
{
  enemy->intentionY = analyzingPerspectiveY(&map, enemy->base.x, enemy->base.y, HERO);
  enemy->intentionX = analyzingPerspectiveX(&map, enemy->base.x, enemy->base.y, HERO);

  if(enemy->intentionY == 0 && enemy->intentionY == 0) {
      enemy->base.x = 5;
      enemy->base.y = 5;
  }
  if(enemy->intentionY != 0)
  {
    enemy->base.x = enemy->base.x + enemy->intentionY;
  }
    if(enemy->intentionX != 0)
  {
    enemy->base.y = enemy->base.y + enemy->intentionX;
  }
}

int analyzingPerspectiveY(Map *map, int x, int y, char targer)
{
  int found = 0;
  for (int perspective = x + 1; perspective > 0; perspective--)
  {
    if (map->tiles[perspective][y] == targer)
    {
      found = -1;
      break;
    }
  }

  for (int perspective = x + 1; perspective < map->height; perspective++)
  {
    if (map->tiles[perspective][x] == targer)
    {
      found = 1;
      break;
    }
  }

  return found;
}

int analyzingPerspectiveX(Map *map, int x, int y, char targer)
{
  int found = 0;

  printf("WIDTH: %d \n", map->width);
  printf("[ x: %d | y: %d ] \n", x, y);

  printf("[NEGATIVE] \n\n");
  for (int perspective = y + 1; perspective > 0; perspective--)
  {
    if (map->tiles[x][perspective] == targer)
    {
      printf("H: [ x: %d | y: %d ] \n", x, perspective);
      found = -1;
      break;
    }
  }

  printf("[POSITIVE] \n\n");
  for (int perspective = y + 1; perspective < map->height; perspective++)
  {
    if (map->tiles[x][perspective] == targer)
    {
      printf("H: [ x: %d | y: %d ] \n", x, perspective);
      found = 1;
      break;
    }
  }

  return found;
}