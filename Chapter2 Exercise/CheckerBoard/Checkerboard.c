/*Display the following checkerboard pattern with eight
printf statements and then display the same pattern with as few printf statements as possible*/
#include <stdio.h>
int main(void){
    int counter=1;
    while(counter<5){
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    counter+=1;
    }
    /* printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n"); */
}