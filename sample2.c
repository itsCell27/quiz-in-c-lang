#include <stdio.h>
#include <stdlib.h> // I tried adding this library, removed warning of system cls but not working as intended after 'y' on VSc
#include <ctype.h>

/* 
Roles
Team Leader:Jamir Kenneth D. Lagua
Programmer: Rj Facundo, Edcel John Lorenz Lero
Debugger: Alexander Drueco
Presenter: Jeremiah Temporado Mapagmahal123
*/

int main() {
    
    //initialize
    char tryAgain;
    //assign correct answers here
    char answers[10] = {'a', 'b', 'a', 'c', 'b', 'a', 'a', 'd', 'c', 'c'}; // declared '10' inside [], works.
    char userAnswers[10]; // for storing user's answers
    int correct, incorrect; // for storing the number of correct and incorrect 
    int space, index_questions, index_choices, index_answers;// for loops variables
    
    //displays introduction
    printf("\n10 Questions related to C language C language quiz\n\n");
    
    //type your questions here
    char questions[10] [100] = { // added '10' inside [], removed '*', added [10] [100]
        "1. What does 'printf' function do in C?",
        "2. Which data type is used to store a single character in C?",
        "3. What is the result of 5 + 7 in C?",
        "4. What is the purpose of the 'if' statement in C?",
        "5. How do you declare a variable in C?",
        "6. Which operator is used for logical 'AND' in C?",
        "7. What is the 'sizeof' operator used for in C?",
        "8. How do you define a function in C?",
        "9. Which data type is used to store decimal numbers in C?",
        "10. How do you allocate memory dynamically in C?"
    };
    
    //type your choices here
    char choices[40] [100] = { // added 40 inside [], removed '*', added [40] and [100]
        "a. It prints text to the console.",
        "b. It performs mathematical calculations.",
        "c. It reads input from the keyboard.",
        "d. It defines a new function.",
        "a. int",
        "b. char",
        "c. float",
        "d. double",
        "a. 12",
        "b. 52",
        "c. 7",
        "d. 1",
        "a. To declare a variable.",
        "b. To print text.",
        "c. To control the flow of a program.",
        "d. To define a new function.",
        "a. By using the 'declare' keyword.",
        "b. By initializing it with a value.",
        "c. By using the 'var' keyword.",
        "d. By writing a comment.",
        "a. &&",
        "b. ||",
        "c. &",
        "d. |",
        "a. It returns the size of a datatype in bytes.",
        "b. It prints the size of a datatype.",
        "c. It allocates memory for a datatype.",
        "d. It returns the datatype of a variable.",
        "a. By using the 'func' keyword.",
        "b. By declaring a variable.",
        "c. By using the 'define' keyword.",
        "d. By writing code outside the 'main' function.",
        "a. int",
        "b. char",
        "c. float",
        "d. decimal",
        "a. Using the 'allocate' keyword.",
        "b. By declaring a variable.",
        "c. Using the 'malloc' function.",
        "d. Automatically by the compiler."
    };
    
      
    do {
   
        //displays directions
        printf("\n\n");
        printf("Directions: choose (a, b, c, d)\n\n\n");
        
        //space
	        for (space = 1; space <= 70; space++){
		        printf("-");	
	        }
	        printf("\n");
        
        //displays questions from 1 to 10
        for (index_questions = 0; index_questions < 10; index_questions++) {
            
            printf("%s\n\n", questions[index_questions]);
            
            //displays 4 choices in every questions
            for (index_choices = 0; index_choices < 4; index_choices++) { 
                
                printf("%s\n", choices[index_questions * 4 + index_choices]);
            }
            
            // user input 
            printf("\nYour answer: ");
            scanf(" %c", &userAnswers[index_questions]);
            userAnswers[index_questions] = tolower(userAnswers[index_questions]); //if user input a capital letter
            
            //space
	        for (space = 1; space <= 70; space++){
		        printf("-");	
	        }
	        printf("\n");
        }
        
        // checks if the user's answers are correct
        for (index_answers = 0; index_answers < 10; index_answers++) {
            if (userAnswers[index_answers] == answers[index_answers]) {
            correct++; // adds 1 
            }
        }
        
        // computes the number of incorrect answers
        incorrect = 10 - correct;
        
        // computes the score
        int score = (correct * 100) / 10;
        
        //displays summary
        printf("\n\nSummary:\n");
        printf("No. of correct items: %d\n", correct);
        printf("No. of incorrect items: %d\n", incorrect);
        printf("Score: %d\n", score);
        
        //checks the equivalent remarks of the score
        if (score == 100) {
            printf("Remarks: You are Genius\n");
        } else if (score >= 80) {
            printf("Remarks: Excellent\n");
        } else if (score >= 70) {
            printf("Remarks: Very Good\n");
        } else if (score >= 60) {
            printf("Remarks: Good\n");
        } else if (score >= 50) {
            printf("Remarks: Fair\n");
        } else if (score >= 40) {
            printf("Remarks: Poor\n");
        } else {
            printf("Remarks: Study more\n");
        }
        
        //ask the user if he/she wants to try again
        printf("Do you want to try again? (y/n): ");
        scanf(" %c", &tryAgain);
        tryAgain = tolower(tryAgain); //if user input a capital letter
     	incorrect = 0, correct = 0; //clears the correct and incorrect scores
     	system("cls"); //clears the console 
    }
    while(tryAgain == 'y'); //if the user inputs 'y' the quiz will start again
    
    

    return 0;
}
