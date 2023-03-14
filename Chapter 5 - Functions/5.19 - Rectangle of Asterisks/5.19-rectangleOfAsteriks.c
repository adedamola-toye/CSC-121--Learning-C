/*Write a function that displays a solid rectangle of asterisks whose
sides are specified in the integer parameters side1 and side2*/

//FUNCTION PROTOTYPE
void  RectangleOfAsterisks(int side1, int side2);

//FUNCTION DEFINITION
void RectangleOfAsterisks(int side1, int side2){ //function doesn't return a value. instead it prints character
    for(int breadth=1; breadth<=side2; breadth++){
        for(int length=1; length<=side1; length++){
            printf("*");
        }
        printf("\n");
    }
}

int main(void){
    int lengthOfRectangle, breadthOfRectangle;
    printf("Enter length of rectangle (0 to quit): ");
    scanf("%d", &lengthOfRectangle);

    while(lengthOfRectangle!=0){
        printf("Enter breadth of rectangle (0 to quit): ");
        scanf("%d", &breadthOfRectangle);

        while(lengthOfRectangle<0 || breadthOfRectangle<0){//while the user inputs a negative value for length or breadth
            puts("INVALID input!!!Length and breadth can only be positive integers.\n");
            
            printf("Enter length of rectangle: ");
            scanf("%d", &lengthOfRectangle);
            puts("Enter breadth of rectangle(0 to quit):");
            scanf("%d", &breadthOfRectangle);
        }

        if(breadthOfRectangle == 0){ //ends program if user inputs 0 for breadth
            break;
        }

        RectangleOfAsterisks(lengthOfRectangle, breadthOfRectangle);

        printf("Enter length of rectangle (0 to quit): ");
        scanf("%d", &lengthOfRectangle);
    }
}