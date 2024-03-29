/*
 * Tutorial 3 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questions.h"

// Initializes the array of questions for the game
void initialize_game(void)
{
    // initialize each question struct and assign it to the questions array

    // Programming category questions

    strcpy(questions[0].category, "programming");
	strcpy(questions[0].question, "What does HTML stand for?");
	strcpy(questions[0].answer, "Hyper Text Markup Language");
	questions[0].value = 200;
	questions[0].answered = false;

	strcpy(questions[1].category, "programming");
	strcpy(questions[1].question, "What is a loop that never ends?");
	strcpy(questions[1].answer, "infinite loop");
	questions[1].value = 400;
	questions[1].answered = false;

	strcpy(questions[2].category, "programming");
	strcpy(questions[2].question, "What was Java called before it was Java?");
	strcpy(questions[2].answer, "Oak");
	questions[2].value = 600;
	questions[2].answered = false;

	strcpy(questions[3].category, "programming");
	strcpy(questions[3].question, "A short sections of code written to complete a task.");
	strcpy(questions[3].answer, "Function");
	questions[3].value = 800;
	questions[3].answered = false;


    // Algorithms category questions

	strcpy(questions[4].category, "algorithms");
	strcpy(questions[4].question, "The memory address of the first element of an array is called.");
	strcpy(questions[4].answer, "Base Address");
	questions[4].value = 200;
	questions[4].answered = false;

	strcpy(questions[5].category, "algorithms");
	strcpy(questions[5].question, "Which operation takes more than O(1) time with the Hash Table data structure?");
	strcpy(questions[5].answer, "Sort");
	questions[5].value = 400;
	questions[5].answered = false;

	strcpy(questions[6].category, "algorithms");
	strcpy(questions[6].question, "Which search algorithm is best for a large list?");
	strcpy(questions[6].answer, "Binary Search");
	questions[6].value = 600;
	questions[6].answered = false;

	strcpy(questions[7].category, "algorithms");
	strcpy(questions[7].question, "The data structure required to check whether an expression contains balanced parenthesis is?");
	strcpy(questions[7].answer, "Stack");
	questions[7].value = 800;
	questions[7].answered = false;


    // Databases category questions

	strcpy(questions[8].category, "databases");
	strcpy(questions[8].question, "What is the physical storage length of DATE data type?");
	strcpy(questions[8].answer, "4 bytes");
	questions[8].value = 200;
	questions[8].answered = false;

	strcpy(questions[9].category, "databases");
	strcpy(questions[9].question, "A database with only one table is called a ...?");
	strcpy(questions[9].answer, "Flat-file database");
	questions[9].value = 400;
	questions[9].answered = false;

	strcpy(questions[10].category, "databases");
	strcpy(questions[10].question, "The SQL return code 0 means ...? ");
	strcpy(questions[10].answer, "Successful execution");
	questions[10].value = 600;
	questions[10].answered = false;

	strcpy(questions[11].category, "databases");
	strcpy(questions[11].question, "Immediate database modification technique uses ...?");
	strcpy(questions[11].answer, "Both undo and redo");
	questions[11].value = 800;
	questions[11].answered = false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // print categories and dollar values for each unanswered question in questions array
    char a[12][20];

	for (int i = 0; i < 12; i++) {
		
		if (questions[i].answered == false) {
			
			snprintf(a[i], 20, "%d", questions[i].value);
			
		} else {

			strcpy(a[i], "   ");
		}	
	}

    // Jeopardy gameboard
	printf("   Programming | Algorithms | Databases \n");
	printf("  ==================================================\n");

	printf("      %s    |   %s     |   %s     \n", a[0], a[1], a[2]);
	printf(" ==================================================\n");
	
	printf("      %s    |   %s     |   %s     \n", a[3], a[4], a[5]);
	printf("  ==================================================\n");
	
	printf("      %s    |   %s     |    %s     \n", a[6], a[7], a[8]);
	printf("  ==================================================\n");

	printf("      %s    |   %s     |   %s     \n", a[9], a[10], a[11]);
	printf("  ==================================================\n");
}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{

}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    // Look into string comparison functions
    return false;
}

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // lookup the question and see if it's already been marked as answered
    return false;
}
