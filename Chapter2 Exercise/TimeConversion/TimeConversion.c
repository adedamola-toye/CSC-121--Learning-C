/*Write a program that asks the
user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
minutes and seconds. The time should be displayed as hours:minutes:seconds.*/
#include <stdio.h>
int main(void){
    int time, timeInMinutes, timeInHours;
    printf("Enter the time in seconds:");
    scanf("%d", &time);

    //Processing phase
    if(time<60){
        printf("00:00:%d", time);  //If the time is less than 60 it cannot be converted to minutes or seconds
    }
    if (time > 60 && time <3600 ){  //if time is between 60 and 3600 it can be converted to minutes
        timeInMinutes = time/60;    //the minutes in whole number
        int remainder = time%60;  //remainder from converting to minutes which is the seconds
        printf("00:%d:%d", timeInMinutes, remainder);
    }
    if (time >3600){ //if time is greater than 3600 it can be converted to hours
        timeInHours = time/3600;  //the hours in whole number
        int rem4rmHours = time % 3600; //remainder from converting to hours. This remainder will be later converted to minutes and seconds
        int remTimeInMinutes = rem4rmHours/60; //the remainder above converted to minutes
        int remTimeInSeconds = rem4rmHours % 60; //the remainder from converting the earlier remainder to minutes. this remainder is now the seconds
        printf("%d:%d:%d",timeInHours,remTimeInMinutes, remTimeInSeconds );
    }
}