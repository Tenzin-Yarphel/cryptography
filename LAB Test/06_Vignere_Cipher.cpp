//vignere cipher
//5th Sep 2023

#include<iostream>
using namespace std;
#include<string.h>
int main()
{
char P[100];
char K[20];
char NK[100],EN[100],DC[100];
//input plian text
cout<<"Enter your plain string"<<endl;
cin.getline(P,100);
for(int i=0;P[i]!='\0';i++)
{
	if(P[i]>='a' && P[i]<='z')
	P[i]=P[i]-32;
}
cout<<"Your plaintext in capital : "<<P<<endl;
fflush(stdin);
cout<<"\nEnter your key"<<endl;
cin.getline(K,20);

for(int i=0;K[i]!='\0';i++)
{
	if(K[i]>='a' && K[i]<='z')
	K[i]=K[i]-32;
}

//Extent the key till the length of plain string
int i,j;
int L1=strlen(P);
int L2=strlen(K);
for(i=0,j=0;i<L1;i++,j++)
{
	if(j==L2)
	{
		j=0;
	}
	NK[i]=K[j];
}
NK[i]='\0';
cout<<"\nYour Extended key = "<<NK<<endl;
//Encryption Using Vignere Cipher
for(i=0;i<L1;i++)
{
	EN[i]=((P[i]+NK[i]) %26) +'A';
}
EN[i]='\0';
cout<<"\nEncryted text = "<<EN<<endl;

//Deccryption Using Vignere Cipher
for(i=0;i<L1;i++)
{
DC[i]=(((EN[i]-NK[i]) +26) %26) +'A';
}
DC[i]='\0';
cout<<"\nDecrypted text = "<<DC<<endl;
}
