#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
   // Generating a random index number.
   srand(time(NULL)); // <-- Source: Stack Overflow
   int r = rand() % 6; // <-- Note we are hard-coding limit.  

   // Storing the dictionary of Zen koans.
   char a[6][100]; // <-- Note we must pre-set the size.
   strcpy(a[0], "Odd and even are on one die.");
   strcpy(a[1], "What is the sound of one hand clapping?");
   strcpy(a[2], "To study Buddhism is to study ourselves. To study ourselves is to forget ourselves.");
   strcpy(a[3], "Of what use is it to discuss how grass and trees become enlightened?");
   strcpy(a[4], "Tell me how many beans I hold in this hand!");
   strcpy(a[5], "To a sincere student, every day is a fortunate day.");

   // Run the code.
  printf("You seek Zen!\n\n%s\n", a[r]);
  
  // Terminate the program.
  exit(0);
}

