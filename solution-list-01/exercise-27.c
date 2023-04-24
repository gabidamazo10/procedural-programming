/* Author: Gabriela Santos Damazo
 * Description: Exercise 27 from List 01
 * Date: 24/04/2023 - Time: 13:48
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float h = 0, m = 0;

    printf("Enter an area in hectares: ");
    scanf("%f", &h);

    m = h * 10000;

    printf("\nThe corresponding area in m^2 is: %.1f\n", m);

    return 0;
 }
