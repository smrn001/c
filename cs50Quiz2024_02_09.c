#include <stdio.h>
#define size 5
int main() {
  int image[size][size] = {{1, 0, 1, 0, 1},
                           {0, 1, 0, 1, 0},
                           {0, 1, 1, 1, 0},
                           {1, 0, 1, 0, 1},
                           {1, 1, 0, 1, 1}};
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (image[i][j] == 0)
        printf("⬛");
      else
        printf("⬜");
    }
    printf("\n");
  }
  return 0;
}