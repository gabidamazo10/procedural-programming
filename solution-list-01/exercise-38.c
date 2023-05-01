/* Author: Gabriela Santos Damazo
 * Description: Exercise 38 from List 01
 * Date: 01/05/2023 - Time: 16:25
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float salary = 0.0, newSalary = 0.0;

    printf("Enter the worker salary: ");
    scanf("%f", &salary);

    newSalary = salary * 1.25;

    printf("\nThe worker\'s new salary is: %.2f\n", newSalary);

    return 0;
 }
