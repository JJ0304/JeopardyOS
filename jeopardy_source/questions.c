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
    strcpy(questions[0].category, "coding");
	strcpy(questions[0].question, "What does HTML stand for?");
	strcpy(questions[0].answer, "Hyper Text Markup Language");
	questions[0].value = 200;
	questions[0].answered = false;

	strcpy(questions[1].category, "coding");
	strcpy(questions[1].question, "What is a loop that never ends?");
	strcpy(questions[1].answer, "infinite loop");
	questions[1].value = 400;
	questions[1].answered = false;

	strcpy(questions[2].category, "coding");
	strcpy(questions[2].question, "What was Java called before it was Java?");
	strcpy(questions[2].answer, "Oak");
	questions[2].value = 600;
	questions[2].answered = false;

	strcpy(questions[3].category, "coding");
	strcpy(questions[3].question, "Which operation takes more than O(1) time with the Hash Table data structure?");
	strcpy(questions[3].answer, "Sort");
	questions[3].value = 800;
	questions[3].answered = false;




	strcpy(questions[4].category, "sports");
	strcpy(questions[4].question, "Who is #23 on the los angeles lakers and is also know as the king.");
	strcpy(questions[4].answer, "Lebron James");
	questions[4].value = 200;
	questions[4].answered = false;

	strcpy(questions[5].category, "sports");
	strcpy(questions[5].question, "Who dresses up as the team's character.");
	strcpy(questions[5].answer, "mascot");
	questions[5].value = 400;
	questions[5].answered = false;

	strcpy(questions[6].category, "sports");
	strcpy(questions[6].question, "How many teams are there in the NBA.");
	strcpy(questions[6].answer, "30");
	questions[6].value = 600;
	questions[6].answered = false;

	strcpy(questions[7].category, "sports");
	strcpy(questions[7].question, "The most common sport in the whole world.");
	strcpy(questions[7].answer, "baseball");
	questions[7].value = 800;
	questions[7].answered = false;




	strcpy(questions[8].category, "music");
	strcpy(questions[8].question, "What singer has had a Billboard Number 1 hit in each of the last four decades.");
	strcpy(questions[8].answer, "Mariah Carey");
	questions[8].value = 200;
	questions[8].answered = false;

	strcpy(questions[9].category, "music");
	strcpy(questions[9].question, "The song 8 mile by Eminem is referencing a street in which city?");
	strcpy(questions[9].answer, "Detroit");
	questions[9].value = 400;
	questions[9].answered = false;

	strcpy(questions[10].category, "music");
	strcpy(questions[10].question, "What part of New York was rapper Tupac Shakur from? ");
	strcpy(questions[10].answer, "East Harlem");
	questions[10].value = 600;
	questions[10].answered = false;

	strcpy(questions[11].category, "music");
	strcpy(questions[11].question, "The theme song for the Spongebob Squarepants movie was sang by ...?");
	strcpy(questions[11].answer, "Avril Lavigne");
	questions[11].value = 800;
	questions[11].answered = false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // print categories and dollar values for each unanswered question in questions array
    char a[12][20];

	for (int i = 0; i < NUM_QUESTIONS; i++) {
		
		if (questions[i].answered == false) {
			
			snprintf(a[i], 20, "%d", questions[i].value);
			
		} else {

			strcpy(a[i], "   ");

		}
			
	}

	printf("   %s | %s | %s \n", categories[0], categories[1], categories[2]);
	printf("  __________________________________________________\n");

	printf("      %s    |   %s     |       %s   \n", a[0], a[1], a[2]);
	printf("  __________________________________________________\n");
	
	printf("      %s    |   %s     |       %s   \n", a[3], a[4], a[5]);
	printf("  __________________________________________________\n");
	
	printf("      %s    |   %s     |       %s   \n", a[6], a[7], a[8]);
	printf("  __________________________________________________\n");

	printf("      %s    |   %s     |       %s   \n", a[9], a[10], a[11]);
	printf("  __________________________________________________\n");
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
