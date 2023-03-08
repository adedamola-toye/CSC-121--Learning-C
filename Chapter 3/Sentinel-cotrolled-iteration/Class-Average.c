/*Develop a class-averaging program that will process an arbitrary(undefined) number of grades
each time the program is run. The user enters a sentinel(-1) when he has inputted all thr grades he wants*/
#include <stdio.h>
int main(void){
    unsigned int counter;
    int total,grade;
    float average;

    total = 0;
    counter = 0;

    printf("Enter grade (-1 to end): ");
    scanf("%d", &grade);
    //while user has not yet entered -1
    while (grade != -1){
        total = grade + total;
        counter = counter +1;
        //Input next grade
        printf("Enter grade (-1 to end): ");
        scanf("%d", &grade);
    }
    if (counter != 0){ 
        //to avoid fatal error due to dividing by 0
        average = (float)total/counter; 
        //to avoid truncation
        printf("Class average is %.2f\n", average);
    }
    else{
        puts("No grades were entered");
    }
}