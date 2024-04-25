#include "../includes/game_logic.h"

int isFinish = 0;
Map map;
Hero hero;
Enemy enemy;

int main() {
  initializeMapFromFile(&map, "./assets/maps/map.txt");
  initializeHero(&hero);
  initializeEnemy(&enemy);

  while (1) { 
      system("clear");
      updateMap(&map, &hero.base);
      updateMap(&map, &enemy.base);
      renderMap(&map);
      inputHandler(&map, &hero.base);
      huntedHero(&map, &enemy);
  }
  freeMap(&map);
}
