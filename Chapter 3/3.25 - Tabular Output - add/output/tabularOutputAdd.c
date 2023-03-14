#include <stdio.h>
int main(void){
    int multiple;
   
    printf("A\tA+3\tA+6\tA+9\n");
    for(multiple=1; multiple <=5; multiple++){
         int num=7;
        num*=multiple;
        printf("%d\t%d\t%d\t%d\n", num, num+3, num+6, num+9);
    }
}
