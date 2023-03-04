#include <stdio.h>

int main(void){
    int score;
    printf("Enter your score \n");
    scanf("%d", &score);
    if(score>=70){
        printf("You got an A!");
    }
    if(score<70 && score>=60){
        printf("You got a B");
    }
    if(score<60 && score>=50){
        printf("You got a C");
    }
    if(score<50 && score>=40){
        printf("You got a D");
    }
    if(score<40 && score>=30){
        printf("You got an E");
    }
    if(score<30&&score>=0){
        printf("You got an F");
    }
}