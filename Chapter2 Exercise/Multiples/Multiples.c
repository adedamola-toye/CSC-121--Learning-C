/*Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator*/
#include <stdio.h>
int main(void){
    int int1,int2;
    printf("Enter two integers:");
    scanf("%d%d", &int1, &int2);
    if(int2%int2 == 0){
        printf("%d is a multiple of %d", int1, int2);
    }
    else{
        printf("%d is not a multiple of %d", int1, int2);
    }

}