/* Author: Gabriela Santos Damazo
 * Description: Exercise 17 from List 01
 * Date: 21/04/2023 - Time: 11:04
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float i = 0, c = 0;

    printf("Enter a length in cm: ");
    scanf("%f", &c);

    i = c / 2.54;

    printf("\nThe corresponding length in inches is: %.2f\n", i);

    return 0;
 }


