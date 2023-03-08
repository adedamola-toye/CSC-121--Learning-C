/*Calculate the
sum of the integers from 1 to 10. Use the while statement to loop through the calculation and increment statements. The loop should terminate when the value of x becomes 11*/
#include <stdio.h>
int main(void){
    unsigned int sum, x;
    x=1;
    sum = 0;
    while (x <= 10)
    {
        sum += x;  //sum=sum+x
        ++x;  //x+=1
    }
    printf("The sum is: %d", sum);
    
}