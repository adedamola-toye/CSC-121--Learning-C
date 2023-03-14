//Develop a program to stimulate 20 rolls of a six sided die and print the value of each roll

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //looping 20 times
    for(unsigned int i = 1; i <= 20; i++){

        //pick random number in a dice roll(i.e from 1 to 6 and output it)
        int RandomDiceRollValue = (rand() % 6) +1;
        //the %6 ensures that only 0 to 5 are printed but for inclusiveness, one is added making it 1 to 6
        // i.e if random number from rand function is 4, 4%6=4, 4+1=5. therefore that dice roll will give 5
        //This rand()%6 is called SCALING where number 6 is SCALING FACTOR
        //even if the random number is greater than 6 like 20, 20%6 =2, 2+1=3
        //no matter the number, it will always be between 1 and 6
        //Adding 1 shifts the range of numbers from 0 to 5 to 1 to 6
        printf("%d\t", RandomDiceRollValue);

        //if counter is divisible by 5 begin new line of ouput
        //i.e for every five dice rolls go to the next line
        if( i % 5 == 0){
            puts("");
        }
    }
}

