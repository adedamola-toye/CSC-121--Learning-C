/*Define a function called hypotenuse that calculates the length
of the hypotenuse of a right triangle when the other two sides are given. The function should take
two arguments of type double and return the hypotenuse as a double.*/

#include <stdio.h>
#include <math.h>
 
 //FUNCTION PROTOTYPE;
 double hypotenuse(double side1, double side2);

 //FUNCTION DEFINITION
 double hypotenuse(double side1, double side2){
    double hyp=sqrt( (side1*side1) + (side2*side2) );
    return hyp;
 }

 
 int main(void){
    double firstSide, secondSide, hypotenuseOfTriangle;

    printf("Enter length of first side of triangle in cm (Enter 0 to quit): ");
    scanf("%lf", &firstSide);
    
    while(firstSide!=0){
        printf("Enter length of second side of triangle in cm (Enter 0 to quit):");
        scanf("%lf", &secondSide);


        while(firstSide<0 || secondSide <0){ //when user inputs a negative number for the sides
            printf("INVALID length!!!! Length must be a positive integer\n\n");

            printf("Enter length of first side of triangle in cm : ");
            scanf("%lf", &firstSide);

            printf("Enter length of second side of triangle in cm(enter 0 to quit) :");
            scanf("%lf", &secondSide);

        }
         if(secondSide==0){ //exit program if user inputs 0 for second side
            break;
            }

        hypotenuseOfTriangle= hypotenuse(firstSide, secondSide);

        printf("Side 1 : %.2lf cm\n", firstSide);
        printf("Side 2 : %.2lf cm\n", secondSide);
        printf("Hypotenuse : %.2lf cm\n\n", hypotenuseOfTriangle);

        printf("Enter length of first side of triangle in cm (Enter 0 to quit): ");
        scanf("%lf", &firstSide);
    }
 }