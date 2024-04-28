#include <stdio.h>
int main()
{
    FILE *fpt;
    fpt = fopen("Num.txt", "w");
    fprintf(fpt, "1 2 3 4 5 6 7 8 9 10");
    fclose(fpt);
    return 0;
}