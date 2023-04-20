/* Author: Gabriela Santos Damazo
 * Description: Exercise 13 from List 01
 * Date: 20/04/2023 - Time: 14:32
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float k = 0, m = 0;

    printf("Enter a distance in KM: ");
    scanf("%f", &k);

    m = k / 1.61;

    printf("The corresponding distance in Miles is: %.2f", m);

    return 0;
 }
