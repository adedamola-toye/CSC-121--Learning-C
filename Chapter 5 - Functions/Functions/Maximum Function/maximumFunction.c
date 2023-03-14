//Create a function to determine and return largest of three integers
#include <stdio.h>

//FUNCTION PROTOTYPE
int maximum(int num1, int num2, int num3);

//FUNCTION DEFINITION
int maximum(int num1, int num2, int num3){
    int max = num1; //assume num1 is the maximum
    if(num2>max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }
    return max;
}

int main (void){
    int firstNum, secondNum, thirdNum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);
    //call function
    printf("The maximum number is %d\n", maximum(firstNum,secondNum,thirdNum));
}