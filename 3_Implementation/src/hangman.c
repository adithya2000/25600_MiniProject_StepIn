/**
 * @file hangman.c
 * @author Adithya Narayan K A 
 * @brief  Function definitions for sketches of Hanging Man and retreiving count of lines in a file
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <../inc/hangman.h>
#include<stdio.h>
#include<string.h>

int sketch_one()
{
    printf("_______________\n");
    printf(" |          |  \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 1;
}

int sketch_two()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |             \n");
    printf(" |             \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 2;
}

int sketch_three()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |         |   \n");
    printf(" |         |   \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 3;
}

int sketch_four()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |        /|\\ \n");
    printf(" |         |   \n");
    printf(" |             \n");
    printf("_|_____________\n");
    return 4;
}

int sketch_five()
{
    printf("_______________\n");
    printf(" |         |   \n");
    printf(" |         0   \n");
    printf(" |        /|\\ \n");
    printf(" |         |   \n");
    printf(" |        / \\ \n");
    printf("_|_____________\n");
    return 5;
}

char* retrieve_word(int n,char* word)
{
    FILE *fptr;
    fptr=fopen("words.txt","r");
    for(int i=0;i<n;i++)
    {
        fgets(word,20,fptr);
    }
    word[strlen(word)-1]='\0';
    return word;
}

int count_lines(int choice){
    FILE *fp;
    int count = 0;  // Line counter
    char c;  // To store a character read from file
    char filename[20];
    if(choice==1)    strcpy(filename,"F:\\C Programming\\25600_MiniProject_StepIn\\3_Implementation\\src\\animals.txt");
    else if(choice==2)   strcpy(filename,"F:\\C Programming\\25600_MiniProject_StepIn\\3_Implementation\\src\\movies.txt");
    else if(choice==3)   strcpy(filename,"F:\\C Programming\\25600_MiniProject_StepIn\\3_Implementation\\src\\places.txt");
    // Get file name from user. The file should be
    // either in current folder or complete path should be provided  
    // Open the file
    fp = fopen(filename, "r");
  
    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }
  
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
  
    // Close the file
    fclose(fp);  
    return count;
}