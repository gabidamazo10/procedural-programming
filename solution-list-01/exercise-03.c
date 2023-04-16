/* Author: Gabriela Santos Damazo
 * Description: Exercise 03 from List 01
 * Date: 16/04/2023 - Time: 19:34
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int a, b, c, sum;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("\nEnter another integer: ");
    scanf("%d", &b);

    printf("\nEnter another integer: ");
    scanf("%d", &c);

    sum = a + b + c;

    printf("\nThe sum of the 3 integers is: %d\n", sum);

    return 0;
 }
