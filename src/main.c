#include "../includes/game_logic.h"

int isFinish = 0;
Map map;
Hero hero;

int main() {
  initializeMapFromFile(&map, "./assets/maps/map.txt");
  initializeHero(&hero);

  while (1) {
      system("clear");
      updateMap(&map, hero.base.x, hero.base.y, hero.base.character);
      renderMap(&map);
      inputHandler(&map, &hero.base);
  }
  freeMap(&map);
}
