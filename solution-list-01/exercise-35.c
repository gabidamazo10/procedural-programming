/* Author: Gabriela Santos Damazo
 * Description: Exercise 35 from List 01
 * Date: 30/04/2023 - Time: 17:47
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main() {

    float a = 0.0, b = 0.0, hypothenuse = 0.0;

    printf("Enter the length of the 1st cathet: ");
    scanf("%f", &a);

    printf("Enter the length of the 2nd cathet: ");
    scanf("%f", &b);

    hypothenuse = sqrt(pow(a, 2.0)+ pow(b, 2.0));

    printf("\nThe value of the hypothenuse is: %.2f\n", hypothenuse);

    return 0;
 }
