/*
The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sells the most units wins the contest. Write a pseudocode program and then a
program that inputs a series of 10 non-negative numbers and determines and prints the largest of
the numbers. [Hint: Your program should use three variables as shown below.]

counter:  A counter to count to 10 (i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)
number:  The current number input to the program
largest:  The largest number found so far
*/

#include <stdio.h>
int main(void){
    unsigned int counter = 1; //variable to count the numbers inputted and make sure it doesn't exceed ten
    unsigned int largest = 0; //to store largest number
    unsigned int number;

    while (counter <= 10){
        printf("Enter a non- negative number: ");
        scanf("%u", &number);

        if (number > largest && number >0){ //if the number is larger than the current largest number:
            largest = number;  //assign the value of that number to be the new largest 
            // if the largest was 0 and a number 2 is inputted, since 2>0 the new largest becomes 2
        }

        if (number < 0){
            printf("WARNING! Enter a positive integer");
        }
        ++counter; //increase counter
    }
    printf("Largest number is %u\n", largest);
    
}