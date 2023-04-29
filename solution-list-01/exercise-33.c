/* Author: Gabriela Santos Damazo
 * Description: Exercise 33 from List 01
 * Date: 29/04/2023 - Time: 17:17
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main() {

    int squareSide = 0, area = 0;

    printf("Enter the length of the side of a square: ");
    scanf("%d", &squareSide);

    area = pow(squareSide, 2);

    printf("\nThe area of the square is: %d\n", area);

    return 0;
 }

