/* Author: Gabriela Santos Damazo
 * Description: Exercise 15 from List 01
 * Date: 20/04/2023 - Time: 14:44
 */

 #include <stdio.h>
 #include <stdlib.h>

 #define PI 3.1415

 int main() {

    float r = 0, g = 0;

    printf("Enter an angle in radians: ");
    scanf("%f", &r);

    g = r * 180/PI;

    printf("The corresponding angle in degrees is: %.2f", g);

    return 0;
 }
