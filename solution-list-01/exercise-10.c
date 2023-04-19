/* Author: Gabriela Santos Damazo
 * Description: Exercise 10 from List 01
 * Date: 19/04/2023 - Time: 08:58
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float k = 0, m = 0;

    printf("Enter a velocity in KM per Hour: ");
    scanf("%f", &k);

    m = k / 3.6;

    printf("The corresponding velocity in Meters per Second is: %.2f", m);

    return 0;
 }
