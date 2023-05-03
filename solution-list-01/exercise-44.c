/* Author: Gabriela Santos Damazo
 * Description: Exercise 44 from List 01
 * Date: 03/05/2023 - Time: 16:36
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float stepHeight = 0.0, heightToReach = 0.0;

    printf("Enter the step\'s height in cm: ");
    scanf("%f", &stepHeight);

    printf("Enter the height you want to reach in cm: ");
    scanf("%f", &heightToReach);

    printf("\nYou must go up %d stairs\n", div(heightToReach, stepHeight));


    return 0;
 }
