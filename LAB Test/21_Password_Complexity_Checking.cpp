#include<iostream>
using namespace std;
#include<string.h>

char password_check(char *PWD)
{
	int l=strlen(PWD);
	char R='T';
	char U='F';
	char L='F';
	char SP[]={'@','#','$','&'};
	char SYM='F';
	char D='F';
	int i,j;
	for(i=0;PWD[i]!='\0';i++)
	{
		if (PWD[i]>=48 && PWD[i]<=57)
		{
			D='T';
			R='T';
		}
		if (PWD[i]>=65 && PWD[i]<=90)
		{
			U='T';
			R='T';
		}
		if (PWD[i]>=97 && PWD[i]<=122)
		{
			L='T';
			R='T';
		}
		for(j=0;j<strlen(SP);j++)
		{
			if(PWD[i]==SP[j])
			{
				SYM='T';
				R='T';
			}
		}
	}
	if(L=='F')
	{
		cout<<"Lower letter missing"<<endl;
		R='F';	
	}
	if(U=='F')
	{
		cout<<"Upper letter missing"<<endl;
		R='F';	
	}
	if(D=='F')
	{
		cout<<"Digit missing"<<endl;
		R='F';
	}
	if(SYM=='F')
	{
		cout<<"Symbol letter missing"<<endl;
		R='F';
	}
	return R;
}

int main()
{
	char P[100];
	char FR;
	cout<<"Enter your password : ";
	cin.getline(P,100);
	if(strlen(P)<8 || strlen(P)>12)
	{
		cout<<"Weak password length should be between 8 and 12"<<endl;
		return 0;
	}
	else
	{
		FR=password_check(P);
		if(FR=='F')
		{
			cout<<"Weak Password"<<endl;
		}
		else
		{
			cout<<"Password is Statisfied"<<endl;
		}
	}
}
