/* Author: Gabriela Santos Damazo
 * Description: Exercise 21 from List 01
 * Date: 22/04/2023 - Time: 08:15
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float l = 0, k = 0;

    printf("Enter a mass in pounds: ");
    scanf("%f", &l);

    k = l * 0.45;

    printf("\nThe corresponding mass in kg is: %.2f\n", k);

    return 0;
 }


