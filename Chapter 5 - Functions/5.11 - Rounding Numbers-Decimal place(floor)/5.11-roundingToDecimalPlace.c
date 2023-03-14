/*) Function floor may be used to round a number to a specific decimal
place. The statement
y = floor(x * 10 + .5) / 10;
rounds x to the tenths position (the first position to the right of the decimal point). The statement
y = floor(x * 100 + .5) / 100;
rounds x to the hundredths position (the second position to the right of the decimal point). Write
a program that defines four functions to round a number x in various ways
a) roundToInteger(number)
b) roundToTenths(number)
c) roundToHundredths(number)
d) roundToThousandths(number)
For each value read, your program should print the original value, the number rounded to the
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth, and the number rounded to the nearest thousandth. */


#include <stdio.h>
#include <math.h>

//FUNCTION PROTOTYPE
double roundToInteger(double x);
double roundToTenths(double x);
double roundToHundredths(double x);
double roundToThousandths(double x);

//FUNCTION DEFINITION

double roundToInteger(double x){
    int y=floor(x+.5);
    return y;
}

double roundToTenths(double x){
    float y = floor(x*10 + .5)/10;
    return y;  
}

double roundToHundredths(double x){
    float y = floor(x*100 + .5)/100;
    return y;
}

double roundToThousandths(double x){
    float y = floor(x*1000 + .5)/1000;
    return y;
}

int main(void){
    double num;
    printf("Enter a floating point number(enter 0 to quit):");
    scanf("%lf", &num);
    
    while(num != 0){
        int numRoundedToInteger = roundToInteger(num);
        float numRoundedToTenths = roundToTenths(num);
        float numRoundedToHundredths = roundToHundredths(num);
        float numRoundedToThousandths = roundToThousandths(num);

        printf("Original number : %lf\n", num);
        printf("Number rounded to the nearest integer : %d\n", numRoundedToInteger);
        printf("Number rounded to the nearest tenths : %.1f\n", numRoundedToTenths);
        printf("Number rounded to the nearest hundredths : %.2f\n", numRoundedToHundredths);
        printf("Number rounded to the nearest thousandths : %.3f\n\n", numRoundedToThousandths);
        printf("Enter a floating point number(enter 0 to quit):");
        scanf("%lf", &num);
    }

}