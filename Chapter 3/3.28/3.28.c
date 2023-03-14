//Program that prints the sum of the square of numbers from 1 to 5

#include <stdio.h>
 int main( void ){
    int x = 1; 
    int y = 0;
    int total;
    while ( x <= 5 ) { // loop 5 times 
        total+= x * x; // perform calculation
        printf( "%d\n", x*x); 
        ++x; // increment counter x 
    } // end while 
    printf( "Total is %d\n", total); // display result 
 } // end function main