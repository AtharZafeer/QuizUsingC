#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"quiz.h"
int num=0;
int answer(int i,char sol,int score)
{
	 if((score>=0)&&(score<5))
	{
		switch(i)
    {
        case 1:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else 
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 2:
        if(sol=='c')
		{printf("\n The answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 3:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 4:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 5:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 6:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 7:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 8:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 9:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 10:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		
		
		
	}
}
else if((score>=5)&&(score<10))
	{
		switch(i)
    {
        case 1:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 2:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 3:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 4:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 5:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 6:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 7:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 8:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 9:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 10:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
	}
}
else if((score>=10)&&(score<15))
	{
		switch(i)
    {
        case 1:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 2:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 3:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 4:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 5:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 6:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 7:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 8:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 9:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 10:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
	}
}
else if((score>=15)&&(score<=20))
	{
		switch(i)
    {
        case 1:
        if(sol=='c')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 2:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 3:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 4:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 5:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 6:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");}			
        
		return(num);
		break;
		case 7:
        if(sol=='b')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 8:
        if(sol=='a')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 9:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
		case 10:
        if(sol=='d')
		{printf("\nThe answer is correct");
	    num=+1;}
        else
        {printf("\n The answer is wrong");			
		}
		return(num);
		break;
	}
}
}
/*void main()
{
    int score,i,c;
    i=2;
    score=9;
    c=answers(i,'a',score);
    printf("%d",c);
    
}*/
