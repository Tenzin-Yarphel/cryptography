//Ceaser Cipher by Chris Joseph Levics

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//Declaring all variable
	int i,key;
	char P[100], C[100], O[100];
	char c;
	fflush(stdin);
	cout<<"Enter a plaintext to encrypt"<<endl;
	cin.getline(P,100);
	cout<<"enter key : ";
	cin>>key;
	int n=strlen(P);
	
	//Encryption
	for(i=0; i<n; i++)
	{
		c=P[i];
		c = c + key;
		if(c>='a' && c<='z')
		{
			if(c > 'z')
			{
				c = c - 'z' + 'a' - 1;
			}
			C[i] = c;
		}
		else if(c >='A' && c<='Z')
		{
			if(c > 'Z')
			{
				c = c - 'Z' + 'A' - 1;
			}
			C[i] = c;
		}
	}
	cout<<"Encrypted text = ";
	cout<<C<<endl;
	
	//Decryption
	for(i=0; i<n; i++)
	{
		c=C[i];
		c = c - key;
		if(c>='a' && c<='z')
		{
			if(c < 'a')
			{
				c = c + 'z' - 'a' + 1;
			}
			O[i] = c;
		}
		else if(c >='A' && c<='Z')
		{
			if(c < 'A')
			{
				c = c + 'Z' - 'A' + 1;
			}
			O[i] = c;
		}
	}
	cout<<"Original plain text = ";
	cout<<O<<endl;
}

