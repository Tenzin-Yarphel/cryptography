//Date 22nd Sep 2023
//ficher cipher

#include<iostream>
using namespace std;
int main()
{
	int PT[8]={1,0,0,1,0,0,1,1};
	int LPT[4], RPT[4];
	int K[4];
	cout<<"enter four 1 and 0 "<<endl;
		int i,j;
	for(i=0;i<4;i++)
	{
		cin>>K[i];
	}
	for(i=0,j=0; i<4; i++,j++)
	{
		LPT[j]=PT[i];
	}
	for(i=4,j=0; i<8; i++,j++)
	{
		RPT[j]=PT[i];
	}
	int NRPT[i];
	for(i=0;i<4;i++)
	{
		NRPT[i]=RPT[i]^K[i];
	}
	int ET[8];
	for(i=0;i<4;i++)
	{
		ET[i]=NRPT[i];
	}
	for(i=4,j=0;i<8;i++,j++)
	{
		ET[i]=LPT[j];
	}
	cout<<"ENcrypted texted"<<endl;
	for(i=0; i<8; i++)
	{
		cout<<ET[i]<<"\t";
	}
	
}
