#include <stdio.h>

int main(void){
    //Calculate the product of three integers
    printf("Enter three integers: "); //prompt message
    int x, y, z;  //declare variable for the three integers
    scanf("%d%d%d", &x, &y, &z); //collect input of three integers from user
    int result=x*y*z;  //multiply values
    printf("The product is %d\n", result); //display result
}