/**
* \file main.c
* \brief Main file of the functions' core
* \author  Sid Ali ZITOUNI TERKI
* \version V1
* \date 21 april 2023
*
* \ programme *
*/

#include "fonction.h"
#include <stdlib.h>
#include <time.h>

/**
* \fn int main (void)
* \brief Program entry.
*
* \return EXIT_SUCCESS - Normal program stop.
* \return EXIT_FAILURE - Program stop with error.
*/


int main(int argc, const char * argv[]) {

    srand(time(NULL));
    
    //We use random for to take a random word from the list.
    uint i = rand() % 11 - 1;
    char* seeks_word[] ={"ALGER", "PROGRAMME", "AVION", "BATEAU", "PAYS", "ECOLE", "RANDOMISER", "EXPLOIT", "AVIATEUR", "TRAVAIL"};
    
    //We play with the word that was taken randomly.
    pendu(seeks_word[i]);
    
    
    return 0;
}
