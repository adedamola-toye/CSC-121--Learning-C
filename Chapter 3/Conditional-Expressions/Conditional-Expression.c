#include <stdio.h>
int main(void){
    //An easier way to write if else statements
    int grade;
    printf("Enter grade: ");
    scanf("%d", &grade);
    puts( grade >=60 ? "Passed" : "Failed");
    //grade >=60 ? puts("Passed") : puts("Failed");
    //?: associates from right to left
}