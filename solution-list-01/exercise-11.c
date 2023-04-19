/* Author: Gabriela Santos Damazo
 * Description: Exercise 11 from List 01
 * Date: 19/04/2023 - Time: 10:07
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float k = 0, m = 0;

    printf("Enter a velocity in Meters per Second: ");
    scanf("%f", &m);

    k = m * 3.6;

    printf("The corresponding velocity in KM per Hour is: %.2f", k);

    return 0;
 }
