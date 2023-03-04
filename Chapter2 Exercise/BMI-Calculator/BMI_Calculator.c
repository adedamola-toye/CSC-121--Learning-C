/*Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index.*/
#include <stdio.h>
int main(void){
    float weight, height;
    printf("BMI VALUES\n");
    printf("Underweight:  less than 18.5\n");
    printf("Normal:       between 18.5 and 24.9\n");
    printf("Overweight:   between 25 and 29.9\n");
    printf("Obese:        30 or greater\n\n");

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    float BMI = weight/(height*height);
    printf("Your BMI is %.1f", BMI);
}