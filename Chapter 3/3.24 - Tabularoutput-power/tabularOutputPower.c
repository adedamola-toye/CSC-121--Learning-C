//Write a program that prints the square, cube, fourth of a number in tabular form

#include <stdio.h>
int main(void){
int num;
printf("N\tN2\tN3\tN4 \n");
for(num=1;num<=10; num++){
    printf("%d\t%d\t%d\t%d\n", num, num*num,num*num*num, num*num*num*num);
}
}