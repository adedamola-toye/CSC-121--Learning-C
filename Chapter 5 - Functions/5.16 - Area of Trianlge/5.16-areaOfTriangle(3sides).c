/* Write a function that reads three nonzero double values as the sides of a
triangle, and calculates and returns the area of the triangle as a double variable. It should also check
whether the numbers represent the sides of a triangle before calculating the area. Use this function in
a program that inputs a series of sets of numbers*/

#include <stdio.h>
#include <math.h>

//FUNCTION PROTOTYPE
double AreaOfTriangle(double side1, double side2, double side3);

//FUNCTION DEFINITION
double AreaOfTriangle(double side1, double side2, double side3){
   double s=(side1 + side2 + side3)/2;
   double area = sqrt( s* (s-side1) * (s-side2) * (s-side3) );
   return area;
}

//ONE-TIME USE PROGRAM
/* int main(void){
    double a, b, c;  //where a, b, c represent the sides of the triangle;
    printf("Enter the three sides of the triangle in cm: ");
    scanf("%lf%lf%lf", &a,&b,&c);
    
    while(a<=0 || b<=0 || c<=0){
        printf("INVALID input!!!! The length of sides must be a positive integer.\n");
        printf("Enter the three sides of the triangle in cm: ");
        scanf("%lf%lf%lf", &a,&b,&c);
    }
    double triangleArea = AreaOfTriangle(a, b, c);
    printf("Area of the triangle : %.2lf cm2", triangleArea);


} */


//TO ALLOW USER TO KEEP CALCULATING AREA OF DIFFERENT TRIANGLES UNTIL USER IS DONE
int main(void){
    double a, b, c;  //where a, b, c represent the sides of the triangle;
    printf("Enter the three sides of the triangle in cm.\n(Enter 0 for all sides to quit): ");
    scanf("%lf%lf%lf", &a,&b,&c);
    
    while (a!=0 || b!=0 || c!=0){ //while user has not entered  0 0 0 to end program;


        while(a<=0 || b<=0 || c<=0){ //If user enters wrong input for the length of sides
            puts("\nINVALID input!!!! The length of sides must be a positive integer.\n");
            printf("Enter the three sides of the triangle in cm.\n(Enter 0 for all sides to quit): ");
            scanf("%lf%lf%lf", &a,&b,&c);
             if(a==0 && b==0 && c==0){ //breaks out of this while loop if user wants to end program by inputting 0 0 0
            break;
            }
        }

         if(a==0 && b==0 && c==0){ //breaks out of this while loop if user wants to end program by inputting 0 0 0
            break;
        }

        double triangleArea = AreaOfTriangle(a, b, c);
        printf("Area of the triangle : %.2lf cm2. \n\n", triangleArea);

        printf("Enter the three sides of the triangle in cm.\n(Enter 0 for all sides to quit): ");
        scanf("%lf%lf%lf", &a,&b,&c);
    }
    
}