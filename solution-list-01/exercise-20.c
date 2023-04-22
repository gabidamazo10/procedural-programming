/* Author: Gabriela Santos Damazo
 * Description: Exercise 20 from List 01
 * Date: 22/04/2023 - Time: 08:11
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float l = 0, k = 0;

    printf("Enter a mass in kg: ");
    scanf("%f", &k);

    l = k / 0.45;

    printf("\nThe corresponding mass in pounds is: %.2f\n", l);

    return 0;
 }

