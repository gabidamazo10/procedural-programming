/* Author: Gabriela Santos Damazo
 * Description: Exercise 06 from List 01
 * Date: 17/04/2023 - Time: 15:06
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float f = 0, c = 0;

    printf("Enter a Celsius temperature: ");
    scanf("%f", &c);

    f = c*(9.0/5.0)+32.0;

    printf("\nThe corresponding Fahrenheit temperature is: %f\n", f);

    return 0;
 }

