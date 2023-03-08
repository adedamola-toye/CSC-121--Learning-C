/*Calculate the sum of the integers from 100 down to 1*/
#include <stdio.h>
int main(void){
    int z = 100;
    int sum = 0;
    while(z>=0){
        sum +=z;  //sum=sum+z
        z=z-1;  //z-=1;
    }
    printf("Sum of the first 100 integers is %d", sum);
 
}

//Sum of integers from 1 to 100
/* #include <stdio.h>
int main(void){
    int z = 1;
    int sum = 0;
    while (z<=100){
        sum +=z;
        ++z;
    }
     printf("Sum of the first 100 integers is %d", sum);
} */