/**
 * @file hangman.c
 * @author Adithya Narayan K A 
 * @brief  Function definitions for sketches of Hanging Man and retreiving a word from a file and count of lines in a file
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <../inc/hangman.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>

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

char* retrieve_word(int n,char* word, char* name)
{
    FILE *fptr;
    char filename[75];
    strcpy(filename,"src\\");
    strcat(filename,name);
    fptr=fopen(filename,"r");
    for(int i=0;i<n;i++)
    {
        fgets(word,100,fptr);
    }
    word[strlen(word)-1]='\0';
    return word;
}

int count_lines(char * name){
    FILE *fp;
    int count = 0;  // Line counter
    char c;  // To store a character read from file
    char filename[75];
    strcpy(filename,"src\\");
    strcat(filename,name);
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
    c=getc(fp);
    while(c!=EOF){
        if(c=='\n'){
            count++;
        }
        c=getc(fp);
    }
    // Extract characters from file and store in character 

    // Close the file
    fclose(fp); 
    return count;
}