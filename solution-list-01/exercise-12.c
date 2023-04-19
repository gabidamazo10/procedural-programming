/* Author: Gabriela Santos Damazo
 * Description: Exercise 12 from List 01
 * Date: 19/04/2023 - Time: 10:10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float k = 0, m = 0;

    printf("Enter a distance in Miles: ");
    scanf("%f", &m);

    k = m * 1.61;

    printf("The corresponding distance in KM is: %.2f", k);

    return 0;
 }
