/* Author: Gabriela Santos Damazo
 * Description: Exercise 16 from List 01
 * Date: 21/04/2023 - Time: 10:58
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float i = 0, c = 0;

    printf("Enter a length in inches: ");
    scanf("%f", &i);

    c = i * 2.54;

    printf("\nThe corresponding length in cm is: %.2f\n", c);

    return 0;
 }

