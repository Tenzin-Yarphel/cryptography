#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char P[100],C[100],D[100];
	int key,i;
	char ch;
	cout<<"enter your plain text"<<endl;
	cin.getline(P,100);
	cout<<"enter your key : ";
	cin>>key;
	
	//Encryption
	for(i=0; P[i]!='\0'; i++)
	{
		ch = P[i];
		if(ch>='a' && ch<='z')
		{
			ch = (ch - 'a' + key ) % 26 + 'a';
		}
		else if(ch>='A' && ch <='Z')
		{
			ch = (ch - 'A' + key) % 26 + 'A';
		}
		else if(ch>='0' && ch<='9')
		{
			ch = (ch - '0' + key ) % 10 +'0';
		}
		else if(ch==32)
		{
			continue;
		}
		C[i]= ch;
	}
	C[i]='\0';
	cout<<"encrypted string is = "<<C<<endl;
	
	//Decryption
	for(i=0; C[i]!='\0'; i++)
	{
		ch=C[i];
		if(ch>='a' && ch<='z')
		{
			ch = (ch - 'a' - key + 26 )% 26 + 'a';
		}
		else if(ch>='A' && ch <='Z')
		{
			ch = (ch - 'A' - key + 26)%26 + 'A';
		}
		else if(ch>='0' && ch<='9')
		{
			ch = (ch - '0' - key + 10)% 10 +'0';
		}
		else if(ch==32)
		{
			continue;
		}
		D[i]=ch;
	}
	D[i]='\0';
	cout<<"Decrypterd Text = "<<D<<endl;
	
}
