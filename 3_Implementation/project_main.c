  
#include "inc/hangman.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

int chances=0;

char* update_word(char* temp_word,char* word,char lguess);
int (*fparr[5])();


int main()
{
   int n;
   char lguess,word[50],temp_word[50];

   fparr[0]=sketch_one;
   fparr[1]=sketch_two;
   fparr[2]=sketch_three;
   fparr[3]=sketch_four;
   fparr[4]=sketch_five;
   int choice;
   label: printf("\nEnter the category to get the words from: 1) Animals, 2) Movies, 3) Places");
   scanf("%d",&choice);
   int line_count;
   if(choice>0 && choice<4)
      line_count = count_lines(choice);
   else {
       printf("\nInvalid choice");
       goto label;
    }
   srand(time(0));
   n=(rand()%line_count)+1;
   strcpy(word,retrieve_word(n,word));
   printf("The word is %s",word);
   word[strlen(word)-1]='\0';
   printf("%d %s\n",strlen(word),word);
   for(int i=0;i<strlen(word);i++)
   {
      temp_word[i]='_';
   }
   temp_word[strlen(word)]='\0';
   
   while(chances<5)
   {
      printf("Enter a letter to guess the word: ");
      scanf(" %c",&lguess);
      if(isalpha(lguess)==0)
      {
         continue;
         printf("Enter a valid letter from the alphabet\n");
      }
      strcpy(temp_word,update_word(temp_word,word,lguess));
      if(strcmp(temp_word,word)==0)
      {
         printf("You have guessed the word correctly\n");
         return 0;
      }
   }
   printf("You have lost all the chances. The correct word is %s",word);
   return 0;
}

char* update_word(char* temp_word,char* word,char lguess)
{   
    int count=0;
    for(int i=0;i<strlen(word);i++)
    {
       if(word[i]==lguess)
       {
          temp_word[i]=lguess;
          count++;
       }
    }
    printf("The current progress in the word: %s\n",temp_word);
    if(count==0)
    {
       fparr[chances]();
       chances++;
       printf("You have more %d chances\n",(5-chances));
    }
    return temp_word;
}
     