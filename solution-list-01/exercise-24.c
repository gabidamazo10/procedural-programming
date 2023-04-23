/* Author: Gabriela Santos Damazo
 * Description: Exercise 24 from List 01
 * Date: 23/04/2023 - Time: 08:36
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float a = 0, m = 0;

    printf("Enter an area in m^2: ");
    scanf("%f", &m);

    a = m * 0.000247;

    printf("\nThe corresponding length in acre is: %f\n", a);

    return 0;
 }
