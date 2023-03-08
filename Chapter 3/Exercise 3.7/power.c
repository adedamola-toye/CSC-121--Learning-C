/*Write a program to calculate x raised to the y
power. The program should have a while iteration control statement*/
#include <stdio.h>
int main(void){
    unsigned int x, y ,i, power;  //declare variables

    //Initialize variables i and power
    i = 1;
    power = 1;

    //Prompt usr to enter integers x and y and read the values inputted by user
    printf("Enter first integer: ");
    scanf("%u", &x);
    printf("Enter second integer: ");
    scanf("%u", &y);

    //Processing phase
    while (i<=y){
        power *= x; //power=power*x
        ++i;  //i=i+1;
    }
    printf("%u raised to power %u is %u", x, y, power);
}