#include "../../includes/game_logic.h"

void initializeHero(Hero *hero)
{
  hero->base.x = 1;
  hero->base.y = 1;
  hero->base.character = HERO;
}
