#include <stdio.h>
#define size 5
int main() {
  int S[size][size] = {{1, 1, 1, 1, 1},
                       {1, 0, 0, 0, 0},
                       {1, 1, 1, 1, 1},
                       {0, 0, 0, 0, 1},
                       {1, 1, 1, 1, 1}};

  int A[size][size] = {{0, 1, 1, 1, 0},
                       {1, 0, 0, 0, 1},
                       {1, 1, 1, 1, 1},
                       {1, 0, 0, 0, 1},
                       {1, 0, 0, 0, 1}};

  int M[size][size] = {{1, 0, 0, 0, 1},
                       {1, 1, 0, 1, 1},
                       {1, 0, 1, 0, 1},
                       {1, 0, 0, 0, 1},
                       {1, 0, 0, 0, 1}};

  int I[size][size] = {{1, 1, 1, 1, 1},
                       {0, 0, 1, 0, 0},
                       {0, 0, 1, 0, 0},
                       {0, 0, 1, 0, 0},
                       {1, 1, 1, 1, 1}};

  int R[size][size] = {{1, 1, 1, 1, 1},
                       {1, 0, 0, 0, 1},
                       {1, 1, 1, 1, 1},
                       {1, 0, 1, 0, 0},
                       {1, 0, 0, 1, 1}};

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (S[i][j] == 0)
        printf("⬛");
      else
        printf("⬜");
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (A[i][j] == 0)
        printf("⬛");
      else
        printf("⬜");
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (M[i][j] == 0)
        printf("⬛");
      else
        printf("⬜");
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (I[i][j] == 0)
        printf("⬛");
      else
        printf("⬜");
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (R[i][j] == 0)
        printf("⬛");
      else
        printf("⬜");
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}