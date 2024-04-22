#include "../../includes/game_logic.h"
#include <stdio.h>

void initializeMapFromFile(Map *map, const char *filename) {
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    fprintf(stderr, "Erro ao abrir o arquivo %s\n", filename);
    exit(1);
  }

  int width = 0, height = 0;
  char c;
  while ((c = fgetc(file)) != EOF) {
    if (c == '\n') {
      height++;
    } else {
      width++;
    }
  }
  rewind(file);

  height++;

  map->width = width;
  map->height = height;
  map->tiles = (char **)malloc(sizeof(char *) * height);
  for (int i = 0; i < height; i++) {
    map->tiles[i] = (char *)malloc(sizeof(char) * (width + 1));
  }

  int i = 0;
  while (fgets(map->tiles[i], width + 1, file) != NULL) {
    i++;
  }

  fclose(file);
}

void freeMap(Map *map) {
  for (int i = 0; i < map->height; i++) {
    free(map->tiles[i]);
  }
  free(map->tiles);
}
