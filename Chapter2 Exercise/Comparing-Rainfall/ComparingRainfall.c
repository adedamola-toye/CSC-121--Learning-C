#include <stdio.h>
/* Write a program that asks the user to enter the highest rainfall ever in
one season for a country, and the rainfall in the current year for that country, obtains the values from
the user, checks if the current rainfall exceed the highest rainfall and prints an appropriate message
on the screen. If the current rainfall is higher, it assigns that value as the highest rainfall ever. */

int main(void){
    //Define variables
    int highestRain, currentRain;

    //Initialization phase
    highestRain = 0;
    currentRain = 0;

    //Processing phase
    puts("Input the highest rainfall ever in your country");
    scanf("%d" ,&highestRain);
    puts("Input the rainfall this year in your country");
    scanf("%d", &currentRain);

    if(currentRain < highestRain){
        printf("This years rainfall is not as much as the highest rainfall ever in your country\n");
    }
    if(currentRain > highestRain){
        highestRain = currentRain;
        printf("The rainfall this year is more than the highest rainfall ever in your country. The new highest rainfall ever in your country is %d", highestRain);
    }
}