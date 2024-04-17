// // Write a program to CREATE and WRITE N
// // numbers in a file "NUMBER TXT" Open this 
// file then read its content and put all even 
// numbers in one file "EVEN.TXT" and odd numbers
//  in another file "ODD.TXT

#include <stdio.h>
int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int num[n];
    FILE *fptr;
    fptr = fopen("NUMBER.TXT", "w");
    printf("Enter the numbers to write in the file: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        fprintf(fptr, "%d\n", num[i]);
    }
    fclose(fptr);
    FILE *fptr1, *fptr2;
    fptr = fopen("NUMBER.TXT", "r");
    fptr1 = fopen("EVEN.TXT", "w");
    fptr2 = fopen("ODD.TXT", "w");
    int temp;
    while (fscanf(fptr, "%d", &temp) != EOF)
    {
        if (temp % 2 == 0)
        {
            fprintf(fptr1, "%d\n", temp);
        }
        else
        {
            fprintf(fptr2, "%d\n", temp);
        }
    }
    fclose(fptr);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}