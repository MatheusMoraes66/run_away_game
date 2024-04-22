#include "../../includes/keyboard.h"

char getKeyPress() {
  initscr();
  cbreak();
  noecho();
  char key = getch();
  endwin();
  return key;
}
