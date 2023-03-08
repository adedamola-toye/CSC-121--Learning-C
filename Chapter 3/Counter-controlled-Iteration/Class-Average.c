/*A class of ten students took a quiz. The grades (integers in the range 0 to 100) for this
quiz are available to you. Determine the class average on the quiz*/
#include <stdio.h>
int main(void){
    unsigned int counter;
    int grade, total, average;

    total = 0;
    counter = 1;

    while(counter <=10){
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter +1;
    }
    average = total/10;
    printf("Class average is %d\n", average);
}