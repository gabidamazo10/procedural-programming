/* Author: Gabriela Santos Damazo
 * Description: Exercise 19 from List 01
 * Date: 22/04/2023 - Time: 08:06
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float l = 0, m = 0;

    printf("Enter a volume in liters: ");
    scanf("%f", &l);

    m = l / 1000;

    printf("\nThe corresponding volume in m^3 is: %.2f\n", m);

    return 0;
 }



