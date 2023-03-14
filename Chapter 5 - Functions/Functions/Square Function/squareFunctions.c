/*a function square to calculate and print the squares of the integers  from 1 to 10 */
#include <stdio.h>

//FUNCTION PROTOTYPE / DECLARATION
int square (int num); 
//FUNCTION HEADER --- return_type    function_name(parameter1, parameter2, ..., parameterN)

//the int before square shows the function returns an integer 

//the int before y shows the functions receives an integer from caller

//FUNCTION PROTOTYPE
int square(int x);

//FUNCTION DEFINITION
int square(int x){ //function header
    return x*x;
}

int main(void){
     puts("The square of the numbers from 1 to 10 are : ");
    for(int num = 1; num<=10; num++){
       printf("%d  ", square(num)); //function call
        }

        return 0; //shows that program ran successfully
    
    }
    


