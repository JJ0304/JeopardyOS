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
#include "players.h"

// Returns true if the player name matches one of the existing players
bool player_exists(player *players, int num_players, char *name)
{
    // Random selection from array of players
    time_t t;
    srand((unsigned)time(&t));

    for (int i = 0; i < 4; i++)

    {
        printf("Random selection is: %c\n", players[rand()%4]);

        // Validates name of the person entered
        if (players = name) {
            player_exists;
        }

        else {

            return false;
        }
    }

    return false;
}

// Go through the list of players and update the score for the 
// player given their name
void update_score(player *players, int num_players, char *name, int score)
{
    
}