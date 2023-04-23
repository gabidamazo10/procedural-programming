/* Author: Gabriela Santos Damazo
 * Description: Exercise 22 from List 01
 * Date: 23/04/2023 - Time: 08:28
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float m = 0, y = 0;

    printf("Enter a length in yards: ");
    scanf("%f", &y);

    m = y * 0.91;

    printf("\nThe corresponding length in meters is: %.2f\n", m);

    return 0;
 }


