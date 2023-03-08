/*Write a program that demonstrates the difference
between pre incrementing and post incrementing using the increment operator ++*/
#include <stdio.h>
#include <stdio.h>

int main(void) {
    int a = 5;
    int b, c;
    


    
    // Pre incrementing
    b = ++a; // a is incremented to 4, then b gets the new value of a(4)
    printf("Post incrementing\n");
     printf("Original value of a = %d\n", a); //prints original value of a

    printf("b = %d\n", b); // prints "b = 4"
    printf("a = %d\n\n", a); // prints "x = 4", new value of a after increment


    // Post incrementing
    c = a++; // c gets the value of a (3), then a is incremented to 4
    printf("Post incrementing\n");
     printf("Original value of a = %d\n", a); //prints original value of a

    printf("c = %d\n", c); // prints "c = 3"
    printf("a = %d\n", a); // prints "x = 4", new value of a after incrementing
    
}

