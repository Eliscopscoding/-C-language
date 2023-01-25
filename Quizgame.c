#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void main()
{  /*This is where you can 
    store the string in array*/
   // Quetions of the quiz
   char questions[][100]={
   "1. Which opreator used in c to perform division?:",
   "2. Which opreator used in c to perform 'And' opreation?:",
   "3. What is the symbol of seasharp?:",
   "4. Which opreator used in c to perform 'Logical And' opreation?:",
   "5. Which from below used for new line in c?:"
	};
   // Mcq option for the quiz
   char options[][100]={
   	"A. /", "B. %/", 
	   "C. /*", "D. //",
    "A.&", "B.&&", 
	"C.&$", "D.%&",
    "A. Objective C", "B. BT",
	 "C. C++", "D. C#",
	 "A.&", "B.&&", 
	"C.&$", "D.%&",
	"A./n", "B./t", 
	"C.\\t", "D.\\n",
	};
   // Answer of the quetions
   char answers[]={
   'A', 'A', 'D','B','D'
   };
   int numberOfQuestions=sizeof(questions)/sizeof(questions[0]);
   char guess;
   int score = 0;
   int i;
   int j;
   printf("QUIZ GAME\n");
   for(i=0;i<numberOfQuestions;i++)
   {
      printf("*********************\n");
      printf("%s\n",questions[i]);
      printf("*********************\n");

      for(j=(i*4);j<(i*4)+4;j++)
      {
         printf("%s\n",options[j]);
      }

      printf("guess: ");
      guess=getch();

      guess=toupper(guess); // This function makes string in upper case
	  printf("\nEntered:-%c",guess);
      if(guess==answers[i])
      {
         printf("\nCORRECT!\n");
         score++;
      }
      else
      {
         printf("\nWRONG!\n");
      }
      printf("\n\n");
   }
   printf("*********************\n");
   printf("FINAL SCORE: %d/%d\n",score,numberOfQuestions);
   printf("*********************\n");
}
