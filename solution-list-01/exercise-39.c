/* Author: Gabriela Santos Damazo
 * Description: Exercise 39 from List 01
 * Date: 01/05/2023 - Time: 16:28
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float first = 0.0, second = 0.0, third = 0.0;

    float prize = 780.0;

    printf("The total prize is: %.3f\n", prize);

    first = prize * 0.46;
    second = prize * 0.32;
    third = prize - (first + second);

    printf("\nThe first winner\'s prize is: %.3f\n", first);
    printf("\nThe second winner\'s prize is: %.3f\n", second);
    printf("\nThe third winner\'s prize is: %.3f\n", third);

    return 0;
 }
