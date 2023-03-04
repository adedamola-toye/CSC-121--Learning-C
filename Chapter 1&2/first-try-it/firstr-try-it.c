//Always add the stdio header to your code
#include <stdio.h>

//All your code should be in the int main(void) function
int main(void)
{
    printf("Welcome to \"C\"!\a");
    printf("Welcome to \\C!\n");
    printf("Welcome\nto\nC!\n");
    puts("Welcome to C"); //you dont need\n for new line character with puts
    //use puts when your text isn't more than one line
    printf("%s" ,"Welcome "); //instead of 
    printf("Welcome ");

    //A program to add two numbers
    
    int integer1;   //Define variables to store first number entered by user
    int integer2;  //Define variable to store second num entered by user

    //Give  prompting message that accepts integer from user
    printf("Enter first integer\n"); 
    scanf("%d", &integer1);
    printf("Enter second integer\n");
    scanf("%d", &integer2);

    int sum; //Create variable to hold the sum
    sum= integer1+integer2;

    printf("Sum is %d\n",sum);
}