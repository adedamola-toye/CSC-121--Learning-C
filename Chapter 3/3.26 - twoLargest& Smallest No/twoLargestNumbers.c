/*find the two
largest values of the 10 numbers. [Note: You may input each number only once.]*/
#include <stdio.h> 
int main(void){
    int num,i;
    int largestNo1 = 0;
    int largestNo2 = 0;
    int smallestNo1, smallestNo2;
    printf("Input ten numbers: \n");
    for(i=1; i<=10; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        //LARGEST NUMBERS
        if(num>largestNo1){
            largestNo2 = largestNo1; //largest number 2 is equal to the current largest number
            largestNo1 = num;  //largest number 1 assumes the value of num that was larger tha it
        }
        else if(num > largestNo2){ //if num is greater than second largest number
            largestNo2 = num; //second largest number assumes the value of num
        }

        //SMALLEST NUMBERS
        if(num < smallestNo1){
            smallestNo2 = smallestNo1;
            smallestNo1=num;
        }
        else if(num <smallestNo2){
            smallestNo2=num;
        }
    }
    printf("\nThe largest number is %d\n", largestNo1);
    printf("The second largest number is %d\n", largestNo2);
    printf("The smallest number is %d\n", smallestNo1);
    printf("The second smallest number is %d\n",smallestNo2);

}