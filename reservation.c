#include<stdio.h>
main()
{
	int no_of_seats;
	char a;
	int charges;
	char destination[40];
	char train_name[40];
    char username[40]; 
	char password[40];
	char name[40];
	int seats;
	int train_num;
	int train_number;
	printf("=================================================================\n");
	printf("|                                                               |\n");
	printf("|           =====================================               |\n");
	printf("|               train tickets reference system                  |\n");
    printf("|           =====================================               |\n");
	printf("|                                                               |\n");
	printf("=================================================================\n");
	
	printf(" press any key to continue\n ");
	getch();
	
	
	printf("\n=====================  login form  ==========================\n");
	printf(" enter username :- ");
	scanf("%s",username);
	printf("enter password :-");
	scanf("%s",password);
	
	printf("welcome to our system !! \n *********************	Your Login Is Succesfull	*****************************\n");
	printf("press any key to confirm\n");
	getch();
	printf("==================================================================\n");
	printf("                train  reservation system                         \n");
	printf("==================================================================\n");
	printf("1>> reserve a ticket\n");
	printf("2>> view all available trains\n");
	printf("3>> cancel reservation\n");
	printf(" 4>> exit\n");
	printf("-------------------------------------------------------------------\n");
	
	
	int i;
	printf("enter the i value\n");
	scanf("%d",&i);
	
switch(i)
{
	case 1:
	printf("enter your name\n");
	scanf("%s",name);
	printf("enter number of seats\n");
	scanf("%d",&seats);
	
	printf("press enter to view  available trains\n");
	getch();
	

	
	printf("===========================================================================================================\n");
	printf("Train no             TrainName                         Destination                Charges       		 Time\n");
	printf("=================================================================================================================\n");
	printf("1234           Swarnajayanthi sf exp       vishakapatnam to H.Nizamudhin           3000      		    9:30AM\n");
	printf("1231             Tamilanadu exp              	    X to Y                         1000     			4:40PM\n");
	printf("1236              Allepy exp                        A to Z                         2000     			9:30PM\n");
	
	
	
	printf("enter train number");
	scanf("%d",&train_num);
	
	printf("press any key to continue");
	getch();
	
	printf("=====================================================================\n");
	printf("    \t\t\t\t ticket \t\t\t\n");
	printf("======================================================================\n");
	printf("name\n");
	scanf("name:%s",name);
	printf("name:%s",name);
	
	printf("number of seats\n");
	scanf("%d",&no_of_seats);
	printf("%d",no_of_seats);
	
	printf("train name\n");
	scanf("%s",train_name);
	printf("You booked train %s",train_name);
	
	
	
	printf("train num\n");
	scanf("%d",&train_num);
	printf("%d",train_num);
	
	
	printf("destination\n");
	scanf("%s",destination);
	printf("destination:%s",destination);
	
	printf("charges\n");
	scanf("%d",&charges);
	printf("charges:%d",charges);
	
	
	printf("confirm ticket (y/n)\n");
	scanf("%c",a);
 
 while(a =='y'|| a =='Y')
 { 

	printf("=========================================\n");
	printf("reservation done\n");
	printf("=========================================\n");
 }
	printf("press any key to continue\n");
	getch();
		
 case 2:
	printf("view all available trains\n");
	printf("press any key to continue\n");
    getch();
 	printf("===========================================================================================================\n");
	printf("train no\t\t\t    name\t\t\t                         destination\t\t\t                charges\t\t\t        time\t\t\t\n");
	printf(" ===========================================================================================================\n");
	printf("1234\t\t\t        swarnajayanthi sf exp\t\\t\t       vishakapatnam to h.nizamudhin\t\t\t   3000\t\t\t      9:30am\n");
	printf("1231\t\t\t        tamilanadu exp\t\t\t               x to y \t\t\t                          1000\t\t\t     4:40pm\n");
	printf("1236\t\t\t         allepy exp\t\t\t                  a to z \t\t\t                          2000\t\t\t     9:30pm\n");
	printf("enter any key to continue\n");
	getch();

 case 3:
	printf("cancel reservation\n");
	printf("enter your train number\n");
	scanf("%d",&train_number);
	printf("%d",train_number);
	printf("=============================================\n");
	printf("cancel reservation\n");
	printf("=============================================\n");
	printf("cancel reservation\n");
	printf("enter your train number\n");
	scanf("%d",&train_number);
	printf("%d",train_number);
	printf("cancelled\n");
 }
}
 
		
