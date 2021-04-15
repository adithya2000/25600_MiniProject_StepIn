  
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
   char name[75];
   label: printf("\nEnter the category to get the words from: 1) Animals, 2) Movies, 3) Places  : ");
   scanf("%d",&choice);
   printf("%d\n",choice);
   if(choice==1){
      strcpy(name,"animals.txt");
   }
   else if(choice==2){
      strcpy(name,"movies.txt");
   }
   else if(choice==3){
      strcpy(name,"places.txt");
   }
   int line_count;
   if(choice>0 && choice<4)
      line_count = count_lines(name);
   else {
       printf("\nInvalid choice");
       goto label;
    }
   srand(time(0));
   n=(rand()%line_count)+1;
   printf("%d",n);
   strcpy(word,retrieve_word(n,word,name));
   printf("\nThe word is %s",word);
   word[strlen(word)]='\0';
   printf("\n%d %s\n",strlen(word),word);
   int i=0;
   while(i<strlen(word)){
      if(isalpha(word[i])){
         temp_word[i]='_';
      }
      else{
         temp_word[i]=word[i];
      }
      i++;
   
   }
   temp_word[strlen(word)]='\0';
   
   while(chances<5)
  {  
      printf("%s\n",temp_word);
      printf("Enter a letter to guess the word: ");
      scanf(" %c",&lguess);
      if(isalpha(lguess)==0)
      {
         printf("Enter a valid letter from the alphabet\n");
         continue;
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
       if(word[i]==toupper(lguess) || word[i]== tolower(lguess))
       {
          temp_word[i]=word[i];
          count++;
       }
    }
    printf("The current state of the word: %s\n",temp_word);
    if(count==0)
    {
       fparr[chances]();
       chances++;
       printf("You have more %d chances\n",(5-chances));
    }
    return temp_word;
}
     