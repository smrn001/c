// Write a program to initialize an one-dimensional array and display
// elements with their memory addresses using array name as a pointer

#include <stdio.h>
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  // declearing a arraay arr

  printf("Array Element \t Element's Value \t Address\n");
  for (int i = 0; i < 5; i++)
    printf("arr[%d] \t\t\t %d  \t\t  %u\n", i, *(arr + i), arr + i);

  // here arr[%d] => i  represent array element
  // here   %d => *(arr+i) represent the value of the i indexed array
  // as arrray itself is the pointer to its base value
  // arr is the address of arr[0] element
  // similarly arr + 1 is the address of arr[1] element
  // thus the value of arr[0] is represented by *(arr)
  // and the  value  of  ar[0] is represented by *(arr + i)

  return 0;
}