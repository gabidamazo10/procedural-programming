/* Author: Gabriela Santos Damazo
 * Description: Exercise 09 from List 01
 * Date: 18/04/2023 - Time: 15:23
 */


 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float k = 0, c = 0;

    printf("Enter a Celsius temperature: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("\nThe corresponding Kelvin temperature is: %f\n", k);

    return 0;
 }
