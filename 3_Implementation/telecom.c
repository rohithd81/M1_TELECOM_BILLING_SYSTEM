/**
 * @file telecom.c
 * @author Rohith D (rohith.d.2018.ece@ritchennai.edu.in)
 * @brief This is the main program were the project is run
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
struct subscriber
{
char phonenumber[20];
char name[50];
float amount;
}s;
/* addrecords */
void addrecords();
/* list records*/
void listrecords();
/*modify records*/
void modifyrecords();
/*delete records*/
void deleterecords();
/*search records*/
void searchrecords();
/*payment*/
void payment();
char get;
/* Start of the application */
/**
 * @brief main program
 * 
 * @return int 
 */
int main()
{	int password;
	int phonenumber;
	char choice;



	system("cls");

	printf("\n\n\n\n\n\n\n\n\n**************************************************************");
	printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\t\t****************************************************************");
	Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n Enter\n A : for adding a new records.\n L : for list of records");
		printf("\n M : for modifying records.\n P : for payment");
		printf("\n S : for searching records.");
		printf("\n D : for deleting records.\n E : for exit\n");
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case 'P':
				payment();break;
			case 'A':
				addrecords();break;
			case 'L':
				listrecords();break;
			case 'M':
				modifyrecords();break;
			case 'S':
				searchrecords();break;
			case 'D':
				deleterecords();break;
			case 'E':
				system("cls");
				printf("\n\n\t\t\t\tTHANK YOU");
				printf("\n\n\n\n\n:\n\tFOR USING OUR SERVICE");
				Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}

