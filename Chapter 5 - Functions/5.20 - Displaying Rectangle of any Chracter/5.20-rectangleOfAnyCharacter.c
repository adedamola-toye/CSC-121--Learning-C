/*Modify the function created in Exercise 5.19 to
form the rectangle out of whatever character is contained in character parameter fillCharacter.*/

//FUNCTION PROTOTYPE
void RectangleOfAnyCharacter(int side1, int side2, char fillCharacter);

//FUNCTION DEFINITION
void RectangleOfAnyCharacter(int side1, int side2, char fillCharacter){ //function doesn't return a value. instead it prints character
    for(int breadth=1; breadth<=side2; breadth++){
        for(int length=1; length<=side1; length++){
            printf("%c", fillCharacter);
        }
        printf("\n");
    }
}
int main(void){
    int lengthOfRectangle, breadthOfRectangle;
    char anyCharacter;
    printf("Enter length of rectangle (0 to quit): ");
    scanf("%d", &lengthOfRectangle);


    while(lengthOfRectangle!=0){
        printf("Enter breadth of rectangle (0 to quit): ");
        scanf("%d", &breadthOfRectangle);
        getchar(); //consume any leftover newline characters in the input buffer

        printf("Enter any character: ");
        scanf("%c", &anyCharacter);

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

        RectangleOfAnyCharacter(lengthOfRectangle, breadthOfRectangle, anyCharacter);

        printf("Enter length of rectangle (0 to quit): ");
        scanf("%d", &lengthOfRectangle);


}
}