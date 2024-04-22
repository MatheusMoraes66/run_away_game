#include "../../includes/game_logic.h"

void initializeHero(Hero *hero) {
  hero->base.x = 1;
  hero->base.y = 3;
  hero->base.character = HERO;
}


// int *pesceptiveAnalysisX(Map *map, int x) {
//   int blocked = 0;
//   int foundItBarrier[2];
//   for (int pointerY = 0; pointerY < map->height; pointerY++) {
//     if (map->tiles[x][pointerY] != EMPTY) {
//       foundItBarrier[blocked] = pointerY;
//       blocked++;
//       if (blocked > 1) {
//         break;
//       }
//     }
//   }
//   return foundItBarrier;
// }

// int *pesceptiveAnalysisY(Map *map, int y) {
//   int blocked = 0;
//   int foundItBarrier[2];
//   for (int pointerX = 0; pointerX < map->width; pointerX++) {
//     if (map->tiles[pointerX][y] != EMPTY) {
//       foundItBarrier[blocked] = pointerX;
//       blocked++;
//       if (blocked > 1) {
//         break;
//       }
//     }
//   }
//   return foundItBarrier;
// }
