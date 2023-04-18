/* Author: Gabriela Santos Damazo
 * Description: Exercise 08 from List 01
 * Date: 18/04/2023 - Time: 15:20
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float k = 0, c = 0;

    printf("Enter a Kelvin temperature: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("\nThe corresponding Celsius temperature is: %f\n", c);

    return 0;
 }
