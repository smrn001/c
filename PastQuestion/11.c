// // Write a Program to count the number of vowels,
//  consonants, digits, space, special characters
//  and words in a string entered by the user

#include <stdio.h>

int main() {
  char str[100];
  int vowels = 0, consonants = 0, digits = 0, spaces = 0, specialChars = 0,
      words = 0;
  int i;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      vowels++;
    } else if ((str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'Z')) {
      consonants++;
    } else if (str[i] >= '0' && str[i] <= '9') {
      digits++;
    } else if (str[i] == ' ') {
      spaces++;
    } else {
      specialChars++;
    }
  }

  // Counting words
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ' && str[i + 1] != ' ') {
      words++;
    }
  }
  words++;

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Digits: %d\n", digits);
  printf("Spaces: %d\n", spaces);
  printf("Special Characters: %d\n", specialChars);
  printf("Words: %d\n", words);

  return 0;
}
