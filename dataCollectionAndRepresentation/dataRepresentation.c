#include <stdio.h>
int main() {
  FILE *dr;
  char name[20];
  int age;
  char number[15];
  char address[25];
  dr = fopen("rec.data", "r");
  if (dr == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  printf("Name\tAge\tNumber\t\tAddress\n");
  while (fscanf(dr, "%s %d %s %s", name, &age, number, address) != EOF) {
    printf("%s\t%d\t%s\t%s\n", name, age, number, address);
  }
  fclose(dr);
  return 0;
}
