#include "../../includes/game_logic.h"

void initializeEnemy(Enemy *enemy)
{
  enemy->base.x = 3;
  enemy->base.y = 8;
  enemy->base.character = ENEMY;
}

void huntedHero(Map *map, Enemy *enemy)
{
  int newIntentionY = analyzingPerspectiveY(map, enemy->base.x, enemy->base.y, HERO);
  int newIntentionX = analyzingPerspectiveX(map, enemy->base.x, enemy->base.y, HERO);

  int currentIntention = enemy->intentionY != 0 || enemy->intentionX != 0 ? 1 : 0;
  int newIntention = newIntentionY != 0 || newIntentionX != 0 ? 1 : 0;

  if (currentIntention == 0 && newIntention == 0)
  {
    printf("\n TO PERDIDO \n");
    toWalk(map, enemy);
  }
  else if (currentIntention && enemy->memory != 0)
  {
    printf("\n ACHO QUE VI \n");
    enemy->memory = enemy->memory - 1;
    controlIntention(map, enemy, enemy->intentionY, enemy->intentionX);
  }
  else if (newIntention)
  {
    printf("\n TE VI \n");
    enemy->memory = 3;
    controlIntention(map, enemy, newIntentionY, newIntentionX);
  }
}

void controlIntention(Map *map, Enemy *enemy, int y, int x)
{
  if (y != 0)
  {
    int intention = enemy->base.x + x;
    if (collision(map, intention, enemy->base.y))
    {
      enemy->base.x = intention;
    }
  }
  if (x != 0)
  {
    int intention = enemy->base.y + y;
    if (collision(map, enemy->base.x, intention))
    {
      enemy->base.y = intention;
    }
  }
}

int collision(Map *map, int x, int y)
{
  if (map->tiles[x][y] == EMPTY || map->tiles[x][y] == HERO)
  {
    return true;
  }
  return false;
}

void toWalk(Map *map, Enemy *enemy)
{
  int validMoviment = 0;
  do
  {
    int decision = randomNumber(4);

    int newX = enemy->base.x;
    int newY = enemy->base.y;

    switch (decision)
    {
    case 0:
      newY--;
      break;
    case 1:
      newY++;
      break;
    case 2:
      newX--;
      break;
    case 3:
      newX++;
      break;
    default:
      break;
    }

    if (collision(map, newX, newY))
    {
      validMoviment = 1;
      enemy->base.x = newX;
      enemy->base.y = newY;
    }
  } while (validMoviment == 0);
}

int analyzingPerspectiveY(Map *map, int x, int y, char targer)
{
  for (int perspective = x; perspective > 0; perspective--)
  {
    if (map->tiles[perspective][y] == targer)
      return -1;
  }
  for (int perspective = x; perspective < map->height; perspective++)
  {
    if (map->tiles[perspective][y] == targer)
      return 1;
  }
  return 0;
}

int analyzingPerspectiveX(Map *map, int x, int y, char targer)
{
  for (int perspective = y; perspective > 0; perspective--)
  {
    if (map->tiles[x][perspective] == targer)
      return -1;
  }
  for (int perspective = y; perspective < map->width; perspective++)
  {
    if (map->tiles[x][perspective] == targer)
      return 1;
  }
  return 0;
}