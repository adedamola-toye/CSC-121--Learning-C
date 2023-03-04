#include <Stdio.h>

int main(void){
    //A program that compares two numbers entered by user
    printf("Enter two integers and i will tell you the relationships they satisfy\n");

    //Define your variables
    int num1;
    int num2;

    //Get input from user
    scanf("%d %d", &num1, &num2); //you only use ampersand sign for scanf

    if(num1 == num2){
        printf("%d is equal to %d\n", num1, num2);
    }

    if(num1 != num2){
        printf("%d is not equal to %d\n", num1, num2);
    }

    if(num1 < num2){
        printf("%d is less than %d\n", num1, num2);
    }

    if(num1 > num2){
        printf("%d is greater than %d\n", num1, num2);
    }

    if(num1 <= num2){
        printf("%d is less than or equal to %d\n", num1, num2);
    }

    if(num1 >= num2){
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
    
}