/*Write a program that inputs a series of integers and passes them one at a time
to function isEven, which uses the remainder operator to determine whether an integer is even. The
function should take an integer argument and return 1 if the integer is even and 0 otherwise. */

//FUNCTION PROTOTYPE
int EvenOrOdd(int num);

//FUNCTION DEFINITION
int EvenOrOdd (int num){
    if(num%2 == 0){
        return 1; //it is an even number
    }
    else{
        return 0; //It is an odd number
    }
}

int main(void){
    int x;
    printf("Enter a number(0 to quit): ");
    scanf("%d", &x);

    while(x != 0){

        //test if number inputted is even or odd
        int isEvenOrOdd = EvenOrOdd(x);

        if (isEvenOrOdd == 1){ //if isEvenOrOdd is true
            printf("%d is an even number.\n\n" ,x);
        }
        else{//if isEvenOrOdd is true
            printf("%d is an odd number.\n\n", x);
        }
        printf("Enter a number(0 to quit): ");
        scanf("%d", &x);
    }


}