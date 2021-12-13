#include<stdio.h>
int main()
{
	printf("STARTING THE MAIN INSTALLATION FILE OF VARIN OS...... \n");
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
  
  int a;
  printf("User please enter the type of system you want to install it for: 1(GUI) ; 2(GUI & CLI) ; 3{(CLI)We don't provide support for this. It id on your risk}: ");
  scanf("%d", &a);
  if(a == 1)
  {
     printf("Ok!! INSTALLING THE REQUIRED SUPPORTERS FOR INSTALLING THE OS(GUI).... \n");
     char browser;
     printf("DO YOU ALSO WANT US TO INSTALL BROWSERS AND ALL OTHER STUFFS(y or n):");
     scanf(" %c", &browser);
     if(browser == 'y')
     {
       printf("Ok!! INSTALLING SOME REQUIRED APPS ALONG WITH BASE... \n ");
       printf("INSTALLING GRUB CONFIGURATION FILE.... \n");
       printf("PLEASE BE PATIENT.. \n");
     }
     else if(browser == 'n')
     {
       printf("Ok!! JUST INTALLING THE MAIN.... \n");
       printf("INSTALLING GRUB CONFIGURATION FILE.... \n");
       printf("PLEASE BE PATIENT.. \n");
     }
     else 
     {
       printf("Please enter a valid decision ERROR...... \n");
      
     }
  }
  else if(a == 2)
  {
      printf("Ok!! INSTALLING THE REQUIRED SUPPORTERS FOR INSTALLING THE OS(GUI & CLI)....\n ");

      char git;
      printf("User do you want to install git and vim for further processes of your installation(y or n): ");
      scanf(" %c", &git);
       if (git == 'y')
        {
           printf("Ok!! INSTALLING GIT AND VIM FOR FURHTER USE... \n");
           printf("INSTALLING GRUB CONFIGURATION FILE.... \n");
           printf("PLEASE BE PATIENT.. \n");
        } 
       else if (git == 'n')
        {
           printf("Ok!! PROCEEDING WITHOUT INSTALLING GIT AND VIM... \n");
           printf("INSTALLING GRUB CONFIGURATION FILE.... \n");
           printf("PLEASE BE PATIENT.. \n");
        }
       else
        {
           printf("Please enter a valid decision ERROR...  \n");
        }
  }
  else if(a == 3)
  {
    printf("Ok!! INSTALLING THE REQUIRED SUPPORTERS FOR INSTALLING THE OS(CLI only).... \n");
    char vim;
    printf("USER DO YOU WANT SOME BASIC MINIMIAL CLI APPS TO INSTALL ALONG WITH BASE INSTALLATION(y OR n):");
    scanf(" %c", &vim);
    if(vim == 'y')
    {
      printf("OK!! INSTALLING THE BASIC APPS REQUIRED ALONG WITH BASE... \n");
      printf("INSTALLING GRUB CONFIGURATION FILE.... \n");
      printf("PLEASE BE PATIENT.. \n");
    }
    else if(vim == 'n')
    {
      printf("OK!! ONLY INSTALLING THE BASE LINUX SYSTEM(MINIMIAL)...  \n");
      printf("INSTALLING GRUB CONFIGURATION FILE.... \n");
      printf("PLEASE BE PATIENT.. \n");
    }
    else
    {
      printf("Please enter a valid decision ERROR...... \n");
    }
  }
  else 
  {
    printf("Please enter a valid numberERROR.....");
  }
  
	return 0;
}