/*Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the larger of the numbers*/
#include <stdio.h>
 int main(void){
    //Defining variables
    int num1, num2, num3; //Variables to store all the three numbers inputed
    int sum, average, product; //Variables to store the outputs

    //Processing phase
    printf("Enter three different integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    sum=num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = sum/3;
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);

    //Finding smallest  number
    if (num1 < num2 && num1 < num3){
        printf("Smallest is %d\n", num1);
    }
    if (num2 < num1 && num2 < num3){
        printf("Smallest is %d\n", num2);
    }
    if (num3 < num1 && num3 <num2){
        printf("Smallest is %d\n", num3);
    }

    //Finding largest number
    if (num1 > num2 && num1 > num3){
        printf("Largest is %d\n", num1);
    }
     if (num2 >num3 && num2 > num1){
        printf("Largest is %d\n", num2);
    }
    if(num3 > num2 && num3 > num1){
        printf("Largest is %d\n", num3);
    }
 }