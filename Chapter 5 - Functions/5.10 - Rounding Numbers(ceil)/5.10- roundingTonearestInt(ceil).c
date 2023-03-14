/* An application of function ceil is rounding a value to the nearest
integer. The statement
y = ceil(x + .5);
rounds the number x to the nearest integer and assigns the result to y. Write a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the rounded number.*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x;
    int y;
    printf("Enter a floating-point number (enter 0 to quit): ");
    scanf("%lf", &x);
   
    while(x != 0){  //while input is not a number
        y = ceil( x+0.5);
        printf("Original number : %.2lf\nRounded number: %d\n\n", x,y);
        printf("Enter a floating-point number (enter 0 to quit):");
        scanf("%lf", &x);
    }
}



