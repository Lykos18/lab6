
/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }
        // Your Code should be implemented here
        // Iterate through the characters in the input
        // Check if the character is a letter (A-Z or a-z)
        // Increment the corresponding count in the array

      for(int i = 0; i < strlen(input); i++){
        if (input[i] >= 'A' && input[i] <= 'Z' || input[i] >= 'a' && input[i] <= 'z'){
          switch (input[i]){
            case 'A':
            case 'a':
            letterCount[0]++;
            break;

            case 'B':
            case 'b':
            letterCount[1]++;
            break;

            case 'C':
            case 'c':
            letterCount[2]++;
            break;

            case 'D':
            case 'd':
            letterCount[3]++;
            break;

            case 'E':
            case 'e':
            letterCount[4]++;
            break;

            case 'F':
            case 'f':
            letterCount[5]++;
            break;

            case 'G':
            case 'g':
            letterCount[6]++;
            break;

            case 'H':
            case 'h':
            letterCount[7]++;
            break;

            case 'I':
            case 'i':
            letterCount[8]++;
            break;

            case 'J':
            case 'j':
            letterCount[9]++;
            break;

            case 'K':
            case 'k':
            letterCount[10]++;
            break;

            case 'L':
            case 'l':
            letterCount[11]++;
            break;

            case 'M':
            case 'm':
            letterCount[12]++;
            break;

            case 'N':
            case 'n':
            letterCount[13]++;
            break;

            case 'O':
            case 'o':
            letterCount[14]++;
            break;

            case 'P':
            case 'p':
            letterCount[15]++;
            break;

            case 'Q':
            case 'q':
            letterCount[16]++;
            break;

            case 'R':
            case 'r':
            letterCount[17]++;
            break;

            case 'S':
            case 's':
            letterCount[18]++;
            break;

            case 'T':
            case 't':
            letterCount[19]++;
            break;

            case 'U':
            case 'u':
            letterCount[20]++;
            break;

            case 'V':
            case 'v':
            letterCount[21]++;
            break;

            case 'W':
            case 'w':
            letterCount[22]++;
            break;

            case 'X':
            case 'x':
            letterCount[23]++;
            break;

            case 'Y':
            case 'y':
            letterCount[24]++;
            break;

            case 'Z':
            case 'z':
            letterCount[25]++;
            break;
          }
        }
      }

    }
    // More of your code here to
    // Display the letter counts
  char letter = 'A';
    for(int i = 0; i < 26; i++, letter++){
      printf("%c: %d ", letter, letterCount[i]);
    }
    return 0;
}