/* Author: Gabriela Santos Damazo
 * Description: Exercise 41 from List 01
 * Date: 02/05/2023 - Time: 16:06
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

    float salary = 0.0, wage = 0.0, hour= 0.0;

    printf("Enter the hourly wage: ");
    scanf("%f", &wage);

    printf("Enter the number of hours worked: ");
    scanf("%f", &hour);

    salary = (wage * hour) + (wage * hour * 0.10);

    printf("\nThe worker\'s salary is: %.3f\n", salary);

    return 0;
 }
