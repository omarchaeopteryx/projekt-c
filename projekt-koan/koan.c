#include <stdio.h>

int main(void)
{
   // Storing the dictionary of Zen koans.
   char a[6][100]; // <-- Note we must pre-set the size.
   strcpy(a[0], "Odd and ever are on one die.");
   strcpy(a[1], "What is the sound of one hand clapping?");
   strcpy(a[2], "To study Buddhism is to study ourselves. To study ourselves is to forget ourselves.");
   strcpy(a[3], "Koan four");
   strcpy(a[4], "Koan five)";
   strcpy(a[5], "Koan six)";

   // Run the code.
  printf("You seek Zen!\n\n%s\n", a[0]);
  
  // Terminate the program..
  exit(0);
}

