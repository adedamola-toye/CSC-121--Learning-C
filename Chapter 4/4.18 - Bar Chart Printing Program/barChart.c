/*
One interesting application of computers is drawing graphs
and bar charts. Write a program that reads five numbers (each between 1 and 30). For each number
read, your program should print a line containing that number of adjacent asterisks. For example,
if your program reads the number seven, it should print *******
*/

#include <stdio.h>
int main(void){
    int lineCounter, asteriskCounter; //variable  to count number of lines; number of asterisks and to store the number inputted
    int num1, num2, num3, num4,num5;
    //for(lineCounter=1; lineCounter<=5; lineCounter++){
        printf("Enter a number between 1 and 30\n");
        printf("Number 1: ");
        scanf("%d", &num1);
        printf("Number 2: ");
        scanf("%d", &num2);
        printf("Number 3: ");
        scanf("%d", num3);
        printf("Number 4: ");
        scanf("%d, num4");
        printf("Number 5: ");
        scanf("%d", num5);

         if (num1,num2,num3,num4,num5<1 || num1,num2,num3,num4,num5>30){ //If number inputted is not between 1 and 30
            printf("Invalid number! Number must be between 1 and 30");
            //lineCounter--; //redo that particular line number so that the line Counter can still end at 5
        }

        if(num1,num2,num3,num4,num5>1 &&  num1,num2,num3,num4,num5 <30){
            //for (asteriskCounter=1; asteriskCounter<=number; asteriskCounter++){
            
            printf("*");
            }  
        }
        //printf("\n");
       
    
        
