/* Author: Gabriela Santos Damazo
 * Description: Exercise 23 from List 01
 * Date: 23/04/2023 - Time: 08:32
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float m = 0, y = 0;

    printf("Enter a length in meters: ");
    scanf("%f", &m);

    y = m / 0.91;

    printf("\nThe corresponding length in yards is: %.2f\n", y);

    return 0;
 }


