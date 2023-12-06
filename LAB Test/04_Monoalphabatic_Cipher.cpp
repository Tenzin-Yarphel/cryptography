//monoaplhabatic by Chris Joseph Levics

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char P[100],C[100],O[100];
	cout<<"Enter your plaintext = ";
	cin.getline(P,100);
	
	char AL[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
	char RP[27] = {'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','\0'};
	char COPY[100];
	strcpy(COPY,P);
	int i,j;
	for(i=0;P[i]!='\0';i++)
	{
		if(P[i]>='a' && P[i] <='z')
		{
			P[i]=P[i]-32;
		}
	}
	cout<<"uppercase of plaintext = "<<P<<endl;
	//Encryption 
	for(i=0;P[i]!='\0';i++)
	{
		if(P[i]!=' ')
		{
			for(j=0;j<26;j++)
			{
				if(P[i]==AL[j])
				{
					C[i]=RP[j];
				}
			}
		}
		else
		{
			C[i]=P[i];
		}
	}
	C[i]='\0';
	cout<<"Encrypted text is = "<<C<<endl;
	
	//Decrypted by Chris Joseph Levics
	
	for(i=0;C[i]!='\0';i++)
	{
		if(C[i]!=' ')
		{
			for(j=0;j<26;j++)
			{
				if(C[i]==RP[j])
				{
					O[i]=AL[j];
				}
			}
		}
		else
		{
			O[i]=C[i];
		}
	}
	O[i]='\0';
	cout<<"Decrypted text is = "<<O<<endl;
	for(i=0;O[i]!='\0';i++)
	{
		if(O[i]!=COPY[i])
		{
			O[i]=O[i]+32;
		}
	}
	cout<<"Orginal plaintext = "<<O<<endl;
}
