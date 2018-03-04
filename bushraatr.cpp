#include <stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	 char username[20],password[10];
	 int i,c;
	printf("\n\t ------------------------------------");
	printf("\n \t|  ------------------------------   |");
	printf("\n \t|     TRAIN TICKET RERS, SYSTEM     |");
	printf("\n \t|   ------------------------------  |");
	printf("\n\t ------------------------------------");
	printf("\n     ------------------ LOGIN FORM -----------------");
    printf("\n \t  ENTER USERNAME : ");
    scanf("%s",username);
    printf("\n \t  ENTER PASSWORD : ");
    gets(password);
	while (i<10)
	{
		//password[i]=getch();
		c=password[i];
		if(c==13)break;
		else printf("*");
		i++;
	}  
		password[i]='\0';
		i=0;
		printf("\n USERNAME : %s",username);
		printf("\n PASSWORD : %s",password);  
		printf("\n WELCOM TO OUR SYSTEM !! YOUR LOGIN IS SUCESSFUL");
}
