/* Author: Gabriela Santos Damazo
 * Description: Exercise 34 from List 01
 * Date: 30/04/2023 - Time: 17:38
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 #define pi 3.141592

 int main() {

    float circleRadius = 0.0, area = 0.0;

    printf("Enter the radius of the circle: ");
    scanf("%f", &circleRadius);

    area = pi * pow(circleRadius, 2.0);

    printf("\nThe area of the circle is: %.2f\n", area);

    return 0;
 }
