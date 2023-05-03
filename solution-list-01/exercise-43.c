/* Author: Gabriela Santos Damazo
 * Description: Exercise 43 from List 01
 * Date: 03/05/2023 - Time: 16:25
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float price = 0.0, priceDiscount = 0.0, installment = 0.0;

    float commission = 0.0, commisionInstallment = 0.0;

    printf("Enter the price: ");
    scanf("%f", &price);

    priceDiscount = price * 0.70;

    printf("\nThe price with a 0,30 discount is: %.3f\n", priceDiscount);

    installment = price / 3.0;

    printf("\nEach of the 3 installments price is: %.3f\n", installment);

    commission = 0.05 * priceDiscount;

    printf("\nThe worker\'s commission with the first choice is: %.3f\n", commission);

    commisionInstallment = 0.05 * price;

    printf("\nThe worker\'s commission with the second choice is: %.3f\n", commisionInstallment);


    return 0;
 }
