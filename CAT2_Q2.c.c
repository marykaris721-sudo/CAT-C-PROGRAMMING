/*Name: MARY WANJIRU KARIUKI
Reg No:CT100/G/25276/24
Description:a program 
*/

#include <stdio.h>

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

    if (hours_worked < 0 || hourly_wage < 0) {
        printf("Hours and wage must be positive numbers.\n");
        
    }
    if (hours_worked > 40.0) {
        float regular_hours = 40.0;
        float overtime_hours = hours_worked - regular_hours;
        gross_pay = (regular_hours * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    if (gross_pay <= 600.0) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600.0 * 0.15) + ((gross_pay - 600.0) * 0.20);
    }
    
    net_pay = gross_pay - taxes;

    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}