/*Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three
spaces each. [Hint: Use combinations of integer division and the remainder operation.] */
#include <stdio.h>
int main(void){
    int num;
    printf("Enter a five-digit number:  ");
    scanf("%d",&num);
     
    int digit5 = num%10;
    int digit4 = (num/10) %10;
    int digit3 = (num/100) %10;
    int digit2 = (num/1000) %10;
    int digit1 = (num/10000);
    printf("%d   %d   %d   %d   %d", digit1, digit2, digit3, digit4, digit5);
    
}
   



   /*  int digit5 = num%10; //unit place
    int rem4Num = num/10; //the remaining four numbers minus unit place

    int digit4 = rem4Num%10; //tens place
    int rem3Num = rem4Num/10; //remaining three numbers minus tens place

   int hundreds = rem3Num%10; //hundreth place
   int rem2Num = rem3Num/10; //remaining 2 numbers

   int thousands = rem2Num%10; //thousandth place
   int rem1Num = rem2Num/10;  //tens of thousandth place */
