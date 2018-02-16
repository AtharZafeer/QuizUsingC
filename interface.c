#include<stdio.h>
#include<string.h>
#include<conio.h>
#include"quiz.h"
#include <time.h>
void main()
{
	/*int score,i,c;
    i=2;
    score=9;
    c=questions(i,score);
    printf("%d",c);*/
	int exit,i,c,score,f,k;
	printf("\t\t\t\tWELCOME TO THE GAME OF QUIZ\n\n");
	printf("\t\t\t\tHERE YOU WILL SOLVE 20 QUESTIONS.\nFOR EACH CORRECT ANSWER YOU GAIN A POINT.\nFOR EACH WRONG ANSWER YOU GAIN NO POINTS");
	printf("\n\t\t\t\\tPRESS 1 TO PLAY THE GAME");
	scanf("%d",&exit);
	if(exit==1)
	{
		printf("\nBehold you have entered the game");
		printf("\n DOOONNNGG DOOONNNGG DOOONNNGG");
		//printf("\n\t\t Enter any integer in the answer box to exit the game");
		printf("\n\t\t\t YOUR FIRST QUESTION IS");
		score=0;f=0;
		while(exit==1)
		{
			for(k=0;k<5;k++)
			{
				i=printRandoms(1,10,1);
				f=questions(i,score);
				score=score+f;
			}
			printf("your score is %d",score);
			printf("DO YOU WANT TO CONTINUE TO PLAYING THE GAME? IF YES ENTER 1, ELSE ENTER 0");
			scanf("%d",&exit);
		
			
		}
		printf("Your final SCORE is %d\n THANK YOU FOR PLAYING",score);
	}
    

}