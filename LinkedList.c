//
//  LinkedList.c
//  Linked List
//
//  Created by Michael Abdallah-Minciotti on 2014-11-15.
//  Copyright (c) 2014 Michael Abdallah-Minciotti. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dict.h"

#define ENGLISH
//#define FRENCH
#define LONGEST_WORD 45


struct node{
    //make a struct for the nodes with the word of the node and its next value
    char word[LONGEST_WORD];
    struct node* next;
};

int main(int argc, const char * argv[]) {
    //give the welcome message in the defined language
    #ifdef ENGLISH
        printf("%s \n",WELCOMEEN);
    #else
        printf("%s \n",WELCOMEFR);
    #endif
    //create the char array to have the input of the user
    char input[LONGEST_WORD];
    //create the ending and continuous nodes
    struct node *first = NULL;
    struct node *pointer;
    pointer = (struct node*)malloc(sizeof(struct node));
    //var to see if it's the first input
    int choose=0;

    
    while(1){
        //print the input message
        #ifdef ENGLISH
            printf("%s \n",input_en);
        #else
            printf("%s \n",input_fr);
        #endif
        //scan the input
        scanf("%s", input);
        //take care of garbage
        while((getchar() != 10 ) && (getchar() != 13) && (getchar() != '\0')){}
        //check if it's the first input
        if(choose==0){
            //if yes put the input in the node's word, and change the pointers location
            strcpy(pointer->word,input);
            pointer->next = first;
            first = pointer;
            //not the first input anymore
            choose=1;
        }
        else{
            //put the input in the node's word, and change the pointers location
            (*pointer).next = (struct node*)malloc(sizeof(struct node));
            strcpy((*(*pointer).next).word,input);
            pointer = (*pointer).next;
        }
        if(strcmp(input,"***END***")==0){
        //ending case, put back the pointer to the first node
                pointer=first;
            //print word and replace pointer up to the last node (NULL)
                while((*pointer).next!=NULL){
                    printf("%s ", (*pointer).word),
                    pointer=(*pointer).next;
                }
            //print ending message
                #ifdef ENGLISH
                    printf("\n%s \n",end_en);
                #else
                    printf("\n%s \n",end_fr);
                #endif
                return 0;
        }

        
        
        
        
        
    }

    
    return 0;
}
