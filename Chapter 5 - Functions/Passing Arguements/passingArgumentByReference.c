/*When you pass an argument by reference in C, you pass a pointer to the variable to the function. This allows the function to modify the original variable directly.*/

#include <stdio.h>

void increment(int* x) {
    (*x)++;
    printf("Inside the function, x = %d\n", *x);
}

int main() {
    int y = 10;
    printf("Before calling the function, y = %d\n", y);
    increment(&y);
    printf("After calling the function, y = %d\n", y);
    return 0;
}
//Notice that the value of y is modified both inside and outside the increment() function. This is because x is a pointer to the variable y, and any modifications made to *x (the value pointed to by x) affect y directly.

//PASSING ARGUMENTS BY VALUE e in C creates a copy of the value of the argument, while PASSING ARGUMENTS BY REFERENCE allows the function to modify the original variable directly.