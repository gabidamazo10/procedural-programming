/* Author: Gabriela Santos Damazo
 * Description: Exercise 36 from List 01
 * Date: 30/04/2023 - Time: 17:54
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 # define pi 3.141592

 int main() {

    float height = 0.0, radius = 0.0, volume = 0.0;

    printf("Enter the height of the circular cylinder: ");
    scanf("%f", &height);

    printf("Enter the radius of the circular cylinder: ");
    scanf("%f", &radius);

    volume = pi * pow(radius, 2.0) * height;

    printf("\nThe volume of the cylinder is: %.2f\n", volume);

    return 0;
 }
