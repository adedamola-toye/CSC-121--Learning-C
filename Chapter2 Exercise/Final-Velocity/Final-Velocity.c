#include <stdio.h>
//A program that asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity, v, and distance traversed, s

int main(void){
    
    int u, a, t, v, s; //Defining variable for initial velocity, acceleration, time, final velocity and total distance traveled
    //Initialization stage
    v = 0;
    s = 0;

    //Processing stage
    puts("Enter the parameters below to calculate the final velocity and distance traveled");
    puts("Initial Velocity:"); //prompts user to input initial velocity
    scanf("%d",&u); //reads initial velocity inputted by user
    puts("Acceleration:"); //prompts user to input acceleration
    scanf("%d", &a);   //reads acceleration inputted by user
    puts("Time:"); //prompts user to input time if the  motion
    scanf("%d", &t); //reads time inputted by user

    //Formula for calculating final velocity and total distance
    v=u+a*t;
    s=(u*t) + 1/2 *a*t*t;

    //Termination stage
    printf("Final velocity is %dm/s\n", v);  //Display final velocity
    printf("Total distance traveled is %dm\n", s);  //Display total distance traveled
}