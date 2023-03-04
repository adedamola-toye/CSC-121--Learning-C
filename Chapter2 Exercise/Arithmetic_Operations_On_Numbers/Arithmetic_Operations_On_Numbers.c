#include <stdio.h>

int main(void){
    //Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder
    puts("Enter two numbers:");
    int no1, no2;  //Defining variable for the first and second number inputted by user
    scanf("%d%d", &no1, &no2);
    int sum = no1 + no2;
    int difference = no1-no2;;
    int quotient = no1/no2;
    int remainder = no1%no2;

    printf("The sum is %d.\nThe difference is %d.\nThe quotient is %d.\nThe remainder is %d.\n", sum, difference, quotient, remainder);
}