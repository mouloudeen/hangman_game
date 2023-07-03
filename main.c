/**
* @file main.c
*
* @author  Sid Ali ZITOUNI TERKI
*
* @date 21 avril 2023
* @briefs Main file of the functions' core
* @see  fonction.h
*/

#include "fonction.h"
#include <stdlib.h>
#include <time.h>



int main(int argc, const char * argv[]) {

    srand(time(NULL));
    
    uint i = rand() % 11 - 1;
    char* seeks_word[] ={"ALGER", "PROGRAMME", "AVION", "BATEAU", "PAYS", "ECOLE", "RANDOMISER", "EXPLOIT", "AVIATEUR", "TRAVAIL"};
    
    pendu(seeks_word[i]);
    
    
    return 0;
}
