/*A college offers a course that prepares students for the state licensing exam for real estate brokers. Last year, 10 of the students who completed this course took the licensing examination. Naturally, the college wants to know how well its students did on the
exam. You’ve been asked to write a program to summarize the results. You’ve been
given a list of these 10 students. Next to each name a 1 is written if the student passed
the exam or a 2 if the student failed.
Your program should analyze the results of the exam as follows:
1. Input each test result (i.e., a 1 or a 2). Display the prompting message “Enter
result” each time the program requests another test result.
2. Count the number of test results of each type.
3. Display a summary of the test results indicating the number of students who
passed and the number who failed.
4. If more than eight students passed the exam, print the message “Bonus to instructor!*/

#include <stdio.h>
int main(void){
    //Initialization phase
    unsigned int student = 1;
    unsigned int passes = 0;
    unsigned int failures = 0;
    int result;

    //Processing phase
    while(student <= 10){
        printf("Enter result (1=pass, 2=fail): "); //Prompt user to input result
        scanf("%d", &result);//Reads input from user
            
        
        if (result == 1){ //condition to count no of passes
            passes = passes+1; //passes+=1 //
        }
        else{  //condition to count no of failures
            failures = failures +1;
        }
        student = student +1;
        
         while(result!=1 && result != 2){
            printf("\nWARNING! Enter the correct input\n");
            printf("Enter result (1=pass, 2=fail)");
            scanf("%d", &result);
            }
    }
    //Termination phase
    printf("Students who passed: %u\n", passes);
    printf("Students who failed: %u\n", failures);
    
    if (passes >8){
        puts("Bonus to instructor!");
    }
    
}