/* Author: Gabriela Santos Damazo
 * Description: Exercise 31 from List 01
 * Date: 29/04/2023 - Time: 17:10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int number = 0, predecessor = 0, successor = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    predecessor = number - 1;
    successor = number + 1;

    printf("\nThe predecessor of the number is: %d\n", predecessor);
    printf("\nThe successor of the number is: %d\n", successor);

    return 0;
 }

