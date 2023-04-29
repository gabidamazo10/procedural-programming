/* Author: Gabriela Santos Damazo
 * Description: Exercise 32 from List 01
                Sum of the successor of its triple
                with the predecessor of its double.
 * Date: 29/04/2023 - Time: 17:14
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int number = 0, predecessor = 0, successor = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    predecessor = (2*number) - 1;
    successor = (3*number) + 1;

    sum = predecessor + successor;

    printf("\nThe sum is: %d\n", sum);
    return 0;
 }

