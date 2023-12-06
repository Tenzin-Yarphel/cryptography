//Date 27th Sep 2023
//rail fence cipher

#include<iostream>
#include<string.h>
using namespace std;

void railcrypt()
{
char text[100],c[100],d[100];
cout<<"Enter the plain text:";
cin.getline(text,100);
int l=strlen(text);
int i,j,k;
for(i=0,j=0;i<l;i++)
{
	if(i%2==0) c[j++]=text[i];
}
for(i=0;i<l;i++)
{
	if(i%2==1) c[j++]=text[i];
}
cout<<"Encrypted:";
for(i=0;i<l;i++)
{
	cout<<c[i];
}

if(l%2==0)
k=l/2;
else
k=(l/2)+1;
cout<<"\nDecryption:";
for(i=0,j=0;i<k;i++)
{
d[j]=c[i];
j=j+2;
}
for(i=k,j=1;i<l;i++)
{
d[j]=c[i];
j=j+2;
}
for(i=0;i<l;i++)
{
cout<<d[i];
}
}




int main()
{

railcrypt();

return 0;
}
