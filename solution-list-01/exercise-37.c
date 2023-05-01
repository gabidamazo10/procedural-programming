/* Author: Gabriela Santos Damazo
 * Description: Exercise 37 from List 01
 * Date: 01/05/2023 - Time: 16:20
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float product = 0.0, price = 0.0;

    printf("Enter the product\'s price: ");
    scanf("%f", &product);

    price = product * 0.88;

    printf("\nThe product\'s price with 0,12 discount is: %.2f\n", price);

    return 0;
 }
