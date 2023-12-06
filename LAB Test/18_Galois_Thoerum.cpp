//galois field by tenzin yarphel
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int d,A[6]={0,1,2};
	int SUM, PROD;
	cout<<"Enter the degree of polynomial = ";
	cin>>d;
	if(d==2)
	{
		SUM=A[0] ^ A[1];
		PROD=A[0] & A[1];
		cout<<"SUM="<<SUM<<"\t"<<"PROUD="<<PROD<<endl;
	}
	else if (d==3)
	{
		cout<<"Enter two any location as 0 1 2 "<<endl;
		int x,y;
		cin>>x>>y;
		SUM=(A[x] + A[y])%3;
		PROD=(A[x] & A[y]);
		cout<<"SUM="<<SUM<<"\t"<<"PROUD="<<PROD<<endl;
	}
	else
	{
		cout<<"Ivalid degree"<<endl;
	}
}
