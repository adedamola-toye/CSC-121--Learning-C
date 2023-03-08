//Find the first power of 3 larger than 100
#include <stdio.h>
int main(void){
    int product = 3;
    while(product <=100){
        product = 3*product;
        printf("%d  ", product);
    }
}