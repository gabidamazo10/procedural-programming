/* Author: Gabriela Santos Damazo
 * Description: Exercise 18 from List 01
 * Date: 21/04/2023 - Time: 11:10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float l = 0, m = 0;

    printf("Enter a volume in m^3: ");
    scanf("%f", &m);

    l = m * 1000;

    printf("\nThe corresponding volume in liters is: %.2f\n", l);

    return 0;
 }



