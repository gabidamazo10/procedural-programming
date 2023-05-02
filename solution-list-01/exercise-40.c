/* Author: Gabriela Santos Damazo
 * Description: Exercise 40 from List 01
 * Date: 02/05/2023 - Time: 16:00
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    int days = 0;
    float salary = 0.0, value = 0.0;

    printf("Enter the number of work days: ");
    scanf("%d", &days);

    value = days * 30.00;
    salary = value - (value * 0.08);

    printf("\nThe worker\'s salary is: %.3f\n", salary);

    return 0;
 }
