#include<stdio.h>
#include<conio.h>
void prime();
voide pallindrome(int,int);
int even(int);
int menu();
void main()
{
	int c,v1,v2;
	char ch;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				prime number();
				break;
			case 2:
				printf("\n Enter two value:");
				scanf("%d%d",&x&y);
				pallindrome(x,y);
				break;
			case 3:
				c=reverse();
				printf("\n Reverse is : %d",c);
				break;
			case 4:
				printf("Enter two value:");
				scanf("%d%d",&x,&y);
				c=even(x,y);
				printf("\n Even of %d and %d is %d"x,y,c);
				break;
			case 5:
				break;
			case 6:
				exit(0);
			default:
				printf("\n\t\t Invalid choice.\n please enter the choice");
		}
		printf("\n\t\t Do you want to continue?(yes=Y/y,no=N/n):");
		flushall();
		scanf("%c",&ch);
	}while(ch=='Y'||=ch=='y');

	clrscr();
		printf("\n\n\t\t Menu \n\t");
		printf("\n\t------------------------");
		printf("\n\t\t 1.Prime number \n\t\t 2.palindrown number \n\t\t 3.reverse number \n\t\t 4.print even number series n\t\t 5.exit \n\t\t
		printf("\n\t------------------------------");
		printf("\n\t\t Enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1: