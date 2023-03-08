#include <stdio.h>
int main(void){
    int num;
    int counter = 1;
    int largest = 0;
    int smallest;

    while(counter <=3){
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        if (num > largest && num>0){
            largest = num;
        }
        if (num < smallest && num >0){
            smallest = num;
        }
        if(num<0){
            printf("WARNING! Enter a positive integer");
        }
        counter+=1;
    }
    printf("The largest of the three numbers is %d\n", largest);
    printf("The smallest of the three numbers is %d\n", smallest);
}
