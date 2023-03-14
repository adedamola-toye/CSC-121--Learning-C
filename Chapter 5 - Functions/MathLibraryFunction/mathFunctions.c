#include <stdio.h>
#include <math.h>
int main(void){
    //SQUARE ROOT - sqrt()
    printf("Square root of 900.0 is %.2f\n", sqrt(900.0)); //%f can also be used to represent double
    double result = sqrt(225.0);
    printf("Square root of 225.0 is %.2f\n", result);
    int c1=13.0;
    int d = 3.0;
    int f=4.0;
    printf("%.2f\n", sqrt(c1+d*f));

    //CUBE ROOT - cbrt()
    double cubeRoot = cbrt(27.0);  
    double negCubeRoot = cbrt(-8.0);
    //you can use int if its a perfect cube but use double to be safe
    printf("The cube root of 27.0 is %.2f\n", cubeRoot);
    printf("The cube root of -8.0 is %.2f\n", negCubeRoot);

    //EXPONENTIAL - exp()
    double exponential = exp(10.0);   //e to the power of x
    printf("The exponential of 10.0 is  %.2f\n", exponential);

    //NATURAL LOGARITHM  TO BASE e - log()
    double naturalLog = log(2.718282); 
    //Logarithm to the base e = ln x
    printf("The natural log of 2.718282 is %.2f\n", naturalLog);

    //LOGARITHM TO BASE 10 - log10()
    double logBase10=log10(100.0);
    printf("The logarithm to the base 10 of 100.0 is %2f\n", logBase10);

    // FLOATING POINT ABSOLUTE VALUE - fabs()
    double absoluteVal = fabs(13.5);
    double absoluteValNeg = fabs(-23.5);
    printf("The absolute value of 13.5 is %.2f\n", absoluteVal);
    printf("The absolute value of -23.5 is %.2f\n", absoluteValNeg);

    //CEILING ROUNDING - ceil()
    // rounds x to the smallest integer not less  than x
    double ceilRound = ceil(9.2);
    double ceilRoundNeg = ceil(-9.2);
    //round up to number higher than x
    //i.e 9.2 will be 10(higher than x) and -9.2 will be -9( higher than x)
    printf("Ceiling rounding of 9.2  is %.2f\n", ceilRound);
    printf("Ceiling rounding of -9.2  is %.2f\n", ceilRoundNeg);


    //FLOOR ROUNDING - floor()
    //rounds x to the largest integer not greater than x
    double floorRound = floor(9.2);
    double floorRoundNeg = floor (-9.8);
    //round down to number lower than x
    //i.e  9.2 will be 9 (lower than x) and -9.8 will be -10(lower than x)
    printf("Floor rounding of 9.2 is %.2f\n", floorRound);
    printf("Floor rounding of -9.8 is %.2f\n", floorRoundNeg);


    //POWER - pow()
    double power = pow(2, 7);
    //pow(x,y) = x raised to power y
    printf("2 raised to power 7 is %.2f\n", power);

    //REMAINDER AS FLOATING POINT - fmod()
    //remainder of x/y as a floating-point number
    double remInDecimal = fmod(13.657, 2.333);
    printf("The remainder of 13.657/2.333 as a  decimal is %.3f\n", remInDecimal);

    //TRIGONOMETRY - SIN - sin()
    double sin30 = sin(0.5236);
    //sin of x in radians 
    //30 degrees in radians is 0.5236
    printf("Sin 30 is %.3f\n", sin30);


    //TRIGONOMETRY - COS - cos()
    double cos30 = cos(0.5236);
    //cos of x in radians 
    //30 degrees in radians is 0.5236
    printf("Cos 30 is %.3f\n", cos30);


    //TRIGONOMETRY - Tan - tan()
    double tan30 = tan(0.5236);
    //tan of x in radians 
    //30 degrees in radians is 0.5236
    printf("Tan 30 is %.3f\n", tan30);
}