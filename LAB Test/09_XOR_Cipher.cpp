//date 12th Sep 2023
//Doing XOR cipher by taking input as string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char A[9],K[9];
	int H[8];
	int i,j;
	cout<<"Enter your string with 0 and 1 = "<<endl;
	cin.getline(A,10);
		
	fflush(stdin);
	cout<<"Enter Your Key with 0 and 1 = "<<endl;
	cin.getline(K,10);
	
	for(i=0; i<8; i++)
	{
		H[i]=int(A[i])^int(K[i]);
	}
	cout<<endl;
	cout<<"HASHCODE = ";
	
	for(i=0;i<8;i++)
	{
		cout<<H[i];
	}
}

