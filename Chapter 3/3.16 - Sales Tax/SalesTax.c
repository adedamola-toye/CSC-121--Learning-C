/*Sales tax is collected from buyers and remitted to the government. A retailer
has to file a monthly sales tax report which lists the sales for the month and the amount of sales
tax collected, at both the county and state levels. Develop a program that will input the total collections for a month, calculate the sales tax on the collections, and display the county and state
taxes. Assume that states have a 4% sales tax and counties have a 5% sales tax
*/

#include <stdio.h>
int main(void){
    //Declare variables
    float sales, countySalesTax, stateSalesTax, totalSalesTax;
    char  month;

    //Initialization phase
    float totalAmountCollected;
    totalSalesTax = 0;

    //Processing phase
    //Prompt user to input total amount collected and read said input from user
    printf("Enter Total Amount Collected (-1 to quit): ");
    scanf("%f", &totalAmountCollected);

    //While user has not yet entered -1 to end the program
    while(totalAmountCollected != -1){
        //Prompt user to input month and read input from user
        printf("Enter name of month: ");
        scanf("%s", &month);
        //Calculations
        countySalesTax = 0.05 * totalAmountCollected;
        stateSalesTax = 0.04 * totalAmountCollected;
        totalSalesTax = countySalesTax + stateSalesTax;
        sales = totalAmountCollected - totalSalesTax;

        //Termination phase
        printf("Total Collections:  $ %.2f\n", totalAmountCollected);
        printf("Sales:  $ %.2f\n", sales);
        printf("County Sales Tax:  $ %.2f\n", countySalesTax);
        printf("State Sales Tax:  $ %.2f\n", stateSalesTax);
        printf("Total Sales Tax Collected:  $ %.2f\n", totalSalesTax);

        //Prompt user to input total amount collected again
        printf("Enter total amount collected (-1 to quit): ");
        scanf("%f", &totalAmountCollected);
    }
} 