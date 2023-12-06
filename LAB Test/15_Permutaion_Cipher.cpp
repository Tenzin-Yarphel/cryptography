#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int i, cnt=0;
int p8[8]={6,7,8,9,1,2,3,4};
int p10[10]={6,7,8,9,10,1,2,3,4,5};

char input[11], k1[9], k2[10], temp[11];
char LS1[5], LS2[5];
//k1, k2 are for storing interim keys
//p8 and p10 are for storing permutation key

//Read 10 bits from user...
cout<<"Enter 10 bits input:"<<endl;
cin.getline(input,11);
input[10]='\0';
fflush(stdin);

//Applying p10...
for(i=0; i<10; i++)
{
cnt = p10[i];
temp[i] = input[cnt-1];
}
temp[i]='\0';
cout<<"\nYour p10 key is :"<<endl;
for(i=0; i<10; i++)
{ cout<<p10[i]; }
cout<<endl;
cout<<"\nBits after p10 :"<<endl;
cout<<temp<<endl;
//Performing LS-1 on first half of temp
for(i=0; i<5; i++)
{
if(i==4)
temp[i]=temp[0];
else
temp[i]=temp[i+1];
}
//Performing LS-1 on second half of temp
for(i=5; i<10; i++)
{
if(i==9)
temp[i]=temp[5];
else
temp[i]=temp[i+1];
}
cout<<"Output after LS-1 :"<<endl;
cout<<temp<<endl;

cout<<"\nYour p8 key is :"<<endl;
for(i=0; i<8; i++)
{ cout<<p8[i];}
cout<<endl;
//Applying p8...
for(i=0; i<8; i++)
{
cnt = p8[i];
k1[i] = temp[cnt-1];
}
k1[i]='\0';
cout<<"\nYour key k1 is :"<<endl;
cout<<k1<<endl;
}

//This program can be extended to generate k2 as per DES algorithm.
