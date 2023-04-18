/* Author: Gabriela Santos Damazo
 * Description: Exercise 07 from List 01
 * Date: 18/04/2023 - Time: 15:16
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float f = 0, c = 0;

    printf("Enter a Farenheit temperature: ");
    scanf("%f", &f);

    c = 5.0*(f-32.0)/9.0;

    printf("\nThe corresponding Celsius temperature is: %f\n", c);

    return 0;
 }
