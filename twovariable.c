#include <conio.h> // For getch(), getche(), and putch() - Note: Not standard, platform-specific
#include <stdio.h>

int main() {
  s char char1, char2;

  // Using getch() to read the first character
  printf("Enter the first character using getch(): ");
  char1 = getch();

  // Using getche() to read the second character
  printf("\nEnter the second character using getche(): ");
  char2 = getche();

  // Displaying the characters using putch()
  printf("\n\nCharacters entered:\n");
  putch(char1);
  putch('\n'); // Display a newline character for clarity
  putch(char2);
  putch('\n'); // Display another newline character

  return 0;
}
