#include<stdio.h>
int main()
{
	printf("Hello This Is Deepin Desktop. Welcome!!. I am your helper.I will help you up to install this system!! \n");
	char reply;
    printf("Reply(As 'y' for yes and 'n' for no):- ");
    scanf(" %c", &reply);
    
    if (reply == 'y')
    {
       	printf("So do you want me to start guide you through this journey? \n");
        char a;
        printf("Reply(As 'y' for yes and 'n' for no):- ");
        scanf(" %c", &a);
        if (a == 'y')
        {
        	printf("So lets proceed.. \n");
        }
        else       
        {
        	printf("Ok as you say.. \n");
        }
    }

    else
    {
    	printf("Ok user as you say.. \n");
    }

	return 0;
}