// This is the program for printing the ASCII value of any character
/* Sample Input :
    Enter the character : s
   Sample Output :
    The ASCII value of the character s is 115
*/
#include <stdio.h>

void main()
{
    char character ;                            // declaration of variable

    printf("Enter the character :");
    scanf("%c",&character);                     // input charecter

    printf("The ASCII value of the character %c is %d",character,character); // printing ASCII value
}
