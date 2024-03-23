#include <ctype.h>
#include <stdio.h>

int main() {
  char str[100];
  int vowels = 0, consonants = 0, digits = 0, spaces = 0, specialChars = 0,
      words = 0;
  int i;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  for (i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i])) {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
          str[i] == 'O' || str[i] == 'U') {
        vowels++;
      } else {
        consonants++;
      }
    } else if (isdigit(str[i])) {
      digits++;
    } else if (isspace(str[i])) {
      spaces++;
    } else {
      specialChars++;
    }
  }

  // Counting words
  for (i = 0; str[i] != '\0'; i++) {
    if (isspace(str[i]) && !isspace(str[i + 1]) && str[i + 1] != '\0') {
      words++;
    }
  }
  if (str[0] != '\0') {
    words++; // Counting the last word if the string is not empty
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Digits: %d\n", digits);
  printf("Spaces: %d\n", spaces);
  printf("Special Characters: %d\n", specialChars);
  printf("Words: %d\n", words);

  return 0;
}
