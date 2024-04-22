#include "../../includes/keyboard.h"

char key;

void inputHandler(const Map *map, Character *character) {
  key = getKeyPress();
  switch (key) {
  case UP:
    if(map->tiles[character->x-1][character->y] == EMPTY) {
        character->x--;
    }
    break;
  case DOWN:
    if(map->tiles[character->x+1][character->y] == EMPTY) {
        character->x++;
    }
    break;
  case LEFT:
    if(map->tiles[character->x][character->y-1] == EMPTY) {
      character->y--;
    }
    break;
  case RIGHT:
    if(map->tiles[character->x][character->y+1] == EMPTY) {
        character->y++;
    }
    break;
  case POWER:
    printf("Poder\n");
    break;
  case QUIT:
    printf("Saindo do programa\n");
    break;
  default:
    printf("Tecla inválida\n");
  }
}
