#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;
/* opening a account
   showing bank info
   deposit withdraw 
   search */
int main()
{
	char name1[50];
	char name2[50];
	char F_name[50];
	char address[100];
	double  A_no;
	system("color 3F");
	cout<<"                          WELCOME TO THE PORTAL OF ONLINE BANKING BY RESERVE BANK OF INDIA      "<<endl;
	cout<<"Choose the option below : "<<endl;
	cout<<"1.'A' for opening bank account."<<endl;;
	cout<<"2.'B' for getting info for account already exists."<<endl;
	char A,b,C,S;
	char option,Account;
	cin>>option;
	if(option=='A')
	{
		cout<<"------------------------------------------------------------------------------"<<endl;
		cout<<"Welcome to RESERVE BANK OF INDIA "<<endl;
		cout<<"Enter details for opening a new bank account , fill details for completing "<<endl;
		cout<<"Enter First name (as per Adhar card):\t";
		cin>>name1;
		cout<<"Enter last name (as per Adhar card):\t";
		cin>>name2;
		cout<<"Enter Adhar card number:\t";
		cin>>A_no;
		cout<<"Enter Father's name :\t";
		cin>>F_name;
		cout<<"Enter residential address :\t";
		cin>>address;
		cout<<"Choose which type of account you want to create :\n";
		cout<<"Press C for current account :"<<endl;
		cout<<"Press S for saving account :"<<endl;
		cin>>Account;
		if(Account=='S')
		{
		
		}
	}
}
