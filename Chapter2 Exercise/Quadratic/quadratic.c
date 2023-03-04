#include <stdio.h>
int main(void){
    int a, b, x, y;
    a=1;
    b=2;
    x=2;
    y =  a * (x * x * x ) - b * (x * x) - 6;
    printf("%d", y);
}