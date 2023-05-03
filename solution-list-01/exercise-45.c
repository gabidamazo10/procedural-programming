/* Author: Gabriela Santos Damazo
 * Description: Exercise 44 from List 01
 * Date: 03/05/2023 - Time: 16:44
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    char uppercase = 'a', lowercase = 'a';

    printf("Enter a letter in UPPERCASE: ");
    scanf("%c", &uppercase);

    lowercase = uppercase + 32; // USING THE ASCII TABLE

    printf("\nThe same letter in lowercase is: %c\n", lowercase);

    return 0;
 }
