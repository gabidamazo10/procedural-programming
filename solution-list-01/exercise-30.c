/* Author: Gabriela Santos Damazo
 * Description: Exercise 30 from List 01
 * Date: 26/04/2023 - Time: 14:30
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float real = 0, dollarQuotation = 0, dollar = 0;

    printf("Enter the price in real value: ");
    scanf("%f", &real);

    printf("Enter the dollar price quotation: ");
    scanf("%f", &dollarQuotation);

    dollar = real * dollarQuotation;

    printf("\nThe price in dollars is: %.2f\n", dollar);

    return 0;
 }
