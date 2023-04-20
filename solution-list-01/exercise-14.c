/* Author: Gabriela Santos Damazo
 * Description: Exercise 14 from List 01
 * Date: 20/04/2023 - Time: 14:38
 */

 #include <stdio.h>
 #include <stdlib.h>

 #define PI 3.1415

 int main() {

    float r = 0, g = 0;

    printf("Enter an angle in degrees: ");
    scanf("%f", &g);

    r = g * PI/180;

    printf("The corresponding angle in radians is: %.2f", r);

    return 0;
 }
