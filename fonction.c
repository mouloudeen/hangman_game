/**
* @file fonction.c
*
* @author  Sid Ali ZITOUNI TERKI
* @version 2.0
* @date 21 avril 2023
* @briefs Contains the functions' core
* @see  fonction.h
*/

#include "fonction.h"

//Refresh our buffer
void flush_buffer()
{
int c = 0;

while (c != '\n' && c != EOF)
c = getchar();
}

//we search a word playng "Pendu"
void pendu (char* mot_secret){
    
    uint taille_mot = strlen(mot_secret); /*numbers of letters of the searched world*/
    
    printf("Vous avez un mot avec %d lettres\n", taille_mot);
    char saisie_utilisateur[taille_mot+1];
    
   
    int vies = 10; /*Number of lifes initialized to 10*/
    
    
    char mot[taille_mot+1]; /*The word found in case the exact word is not given*/
    
   
    for (char *ptr3 = mot; ptr3 < mot + taille_mot +1;ptr3++){  /* word is initialized*/
        *ptr3 = '-';
        
        if (ptr3 == mot +taille_mot){/*We don't forget the last of the string*/
            *ptr3 = '\0';
        }
    }
    
    
    while (( vies > 0) && (strcmp(mot, mot_secret) != 0) && strcmp(saisie_utilisateur, mot_secret)!= 0)/*As long as life > 0 and word and seizure are secret word difference, we stay in the loop*/
    {
        
        char *ptr2 = NULL;/* We use the pointer for change the world by letters found*/
        ptr2 = mot;
        
        
        int cpt = 0; /* counter cpt initialized to 0*/
        
        printf("%s\n", mot);
        
       
        int taille_mots = (int)taille_mot + 1;  /*max size of the buffer saisie_utilisateur*/
        
        printf("Proposer une lettre ou le mot exacte \n");
        printf("Si vous proposez une lettre valide 2 fois sinon pour le mot valide qu'une fois : ");
        fgets(saisie_utilisateur, taille_mots, stdin);
        
        
        flush_buffer();/*Refresh our buffer*/
        
        
        for (char* ptr= mot_secret;ptr < mot_secret+taille_mot;ptr++){/* We search the letter in mot_secret or we compare the word with mot_secret*/
            
            
            if ((strlen(saisie_utilisateur)!=2) && strcmp(saisie_utilisateur, mot_secret)!=0){/*if saisie_utilisateur is not  a char and saisie_utilisateur different of the mot_secret*/
                cpt =0;
            }
            
           
            else if (*ptr == *saisie_utilisateur){ /*If the letters is in the mot, we add 1 to cpt*/
                *ptr2 = *saisie_utilisateur;
                cpt+=1;
                }
            
            ptr2++;
        }
        
        
        if (cpt ==0){/*If the cpt = 0, we have none letter in the mot, we lose 1 to life*/
            vies -= 1;
            
        }
        
        printf("Il reste %d vie(s)\n",vies);
    }
    
    
    if (strcmp(mot, mot_secret) == 0 || strcmp(saisie_utilisateur, mot_secret) ==0){/* if mot or saisie_utilisateur is equal to mot_secret, we win*/
        printf("Vous avez gagné\n");
        printf("Il vous restait %d vie(s)\n", vies);
    }
    
    else
    {
        printf("Vous avez perdu\n");
    }
    
}
