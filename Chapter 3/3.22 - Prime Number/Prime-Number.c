/*
A prime number is any natural number greater than 1 that
is divisible only by 1 and by itself. Write a C program that reads an integer and determines whether
it is a prime number or not
*/
#include <stdio.h>
int main(void){
    int num;
    int i=2; //set counter to 2
    //counter isn't 1 because prime numbers are divisible by 1 and itself
    int divisibleBy=0; //This counts  the numbers  that an integer can be divided by except one and the number itself
    //int isPrime;

    //Input integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i<num && num >1){ //ie the counter is within range of 2 to (integer inputted -1), If number to be tested is 5 then i is from 2 to 4
        if(num%i==0){ //If integer inputted  is divisible by the counter
            divisibleBy+=1;
           // isPrime=0; is prime is false
        }
        /* else{
            isPrime=1; is prime is true
        } */
        ++i; //increase counter by 1
    }
    if(divisibleBy==0){ //If the integer inputted is not divisible by any number ranging from 2 to that number
        printf("%d is a prime number", num);
    }
   /*  if(isPrime=1){
        printf("%d is a prime number", num);
    } */
    else{
        printf("%d is not a prime number", num);
    }
}

/* #include <stdio.h>
int main(void){
    int num;
    int i ;
    int isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i=2;i<num; i++){
        if(num%i == 0){
            isPrime=0; //is prime is false
        }
        else{
            isPrime=1;
        }
    }
    if(isPrime==1){
        printf("%d is a prime number", num);
    }    
    else{
        printf("%d is not a prime number", num);
    }

} */