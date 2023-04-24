/* Author: Gabriela Santos Damazo
 * Description: Exercise 26 from List 01
 * Date: 24/04/2023 - Time: 13:45
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float h = 0, m = 0;

    printf("Enter an area in m^2: ");
    scanf("%f", &m);

    h = m * 0.0001;

    printf("\nThe corresponding area in hectares is: %.4f\n", h);

    return 0;
 }

