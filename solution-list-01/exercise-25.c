/* Author: Gabriela Santos Damazo
 * Description: Exercise 25 from List 01
 * Date: 24/04/2023 - Time: 13:42
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    float a = 0, m = 0;

    printf("Enter an area in acres: ");
    scanf("%f", &a);

    m = a * 4048.58;

    printf("\nThe corresponding area in m^2 is: %.2f\n", m);

    return 0;
}
