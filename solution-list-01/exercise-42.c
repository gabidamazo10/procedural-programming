/* Author: Gabriela Santos Damazo
 * Description: Exercise 42 from List 01
 * Date: 02/05/2023 - Time: 16:10
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float salary = 0.0, gratification = 0.0, tax = 0.0;

    printf("Enter the worker\'s base salary: ");
    scanf("%f", &salary);

    gratification = salary * 0.05;

    tax = salary * 0.07;

    salary = (salary + gratification) - tax;

    printf("\nThe worker\'s final salary is: %.3f\n", salary);

    return 0;
 }
