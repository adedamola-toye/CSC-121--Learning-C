/*When you pass an argument by value in C, you pass a COPY of the value of the argument to the function. This means that any modifications made to the argument within the function do not affect the original variable outside the function.*/

#include <stdio.h>

void increment(int x) {
    x++;
    printf("Inside the function, x = %d\n", x);
}

int main() {
    int y = 10;
    printf("Before calling the function, y = %d\n", y);
    increment(y);
    printf("After calling the function, y = %d\n", y);
    return 0;
}
//Notice that even though the value of x is incremented inside the increment() function, the value of y is not affected outside the function. This is because x is a local copy of the value of y, and any modifications made to x do not affect y.