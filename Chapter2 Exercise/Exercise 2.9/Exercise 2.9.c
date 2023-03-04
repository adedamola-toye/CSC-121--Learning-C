#include <stdio.h>

int main(void){
    //Print the message “Have a nice day.”
    puts("Have a nice day.");

    // Assign the sum of variables b and c to variable a
    int a, b, c;
    c=a+b;
    
    puts("Enter two integers:");
    scanf("%d%d", &a, &b);
    // Check if the value of variable a is greater than variable b. If it is, store the difference of the two in variable c
    if(a > b){
        c=a-b;
        printf("%d", c);
    }

    // Input three integer values from the keyboard and place them in int variables p, q, and r.
    int p, q, r;
    scanf("%d%d%d", &p, &q, &r);
   


    
}