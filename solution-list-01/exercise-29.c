/* Author: Gabriela Santos Damazo
 * Description: Exercise 29 from List 01
 * Date: 26/04/2023 - Time: 14:23
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float a = 0, b = 0, c = 0, d = 0, meanValue = 0;

    printf("Enter the 1st score: ");
    scanf("%f", &a);

    printf("Enter the 2nd score: ");
    scanf("%f", &b);

    printf("Enter the 3rd score: ");
    scanf("%f", &c);

    printf("Enter the 4th score: ");
    scanf("%f", &d);

    meanValue = (a + b + c + d)/4;

    printf("\nThe mean of the scores is: %.2f\n", meanValue);

    return 0;
 }
