#include <stdio.h>
int main(void){
    int isDivisibleBy;
    int counter;
    int num;
    int minNum, maxNum;

    printf("Enter minimum number (must be a positive integer): ");
    scanf("%d", &minNum);
    while (minNum<0){
        printf("Enter minimum number (must be a positive integer): ");
        scanf("%d", &minNum);
    }
    printf("Enter maximum number (must be a positive integer): ");
    scanf("%d", &maxNum);

    for(num=minNum+1; num<maxNum; num++){   //for each number between minimum no entered and max number
        isDivisibleBy=0;
        for(counter=2; counter<num; counter++){ //the counter is within the range of 2 to each number from minimum  to maximum no entered
            if(num%counter==0){ //if the number is  divisible by the counter (note that the counter cannot be one or the number itself)
                isDivisibleBy+=1;

            }
        }
        
        if(isDivisibleBy==0){  //if isDivisibleBy is zero, it means that that number is not divisible by any number from 2 to (number -1) if number is 3; it means 3 cannot be divisible by 2.
            printf("%d\n",num);
    }
    }

    
}

   
   