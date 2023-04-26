/* Author: Gabriela Santos Damazo
 * Description: Exercise 28 from List 01
 * Date: 26/04/2023 - Time: 14:18
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main() {

    float a = 0, b = 0, c = 0, sumSquare = 0;

    printf("Enter the 1st number: ");
    scanf("%f", &a);

    printf("Enter the 2nd number: ");
    scanf("%f", &b);

    printf("Enter the 3rd number: ");
    scanf("%f", &c);

    sumSquare = pow(a, 2.0) + pow(b, 2.0) + pow(c, 2.0);

    printf("\nThe sum of squares of the numbers is: %.2f\n", sumSquare);

    return 0;
 }
