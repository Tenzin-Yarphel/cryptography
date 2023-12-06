#include<iostream>
#include<string.h>
using namespace std;

int GCD(int a, int b)
	{
		if(a==0)
		{
			return b;
		}
		else
		{
				return GCD(b%a,a);
		}
	}
		
bool coprime(int m1, int m2, int m3)
	{
		if(GCD(m1,GCD(m2,m3))==1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	
int minverse(int M,int m)
{
	int MI;
	int i;
	for(i=1;i<M;i++)
	{
		MI=(i*m)+1;
		if(MI%M==0)
		{
			break;
		}
	}
	MI=MI/M;
	return MI;
}

int main()
{
	int a1,a2,a3,m1,m2,m3,M1,M2,M3,M,X1,X2,X3,X;
	cout<<"Enter the value of a1, a2, a3 "<<endl;
	cin>>a1>>a2>>a3;
	cout<<"Enter the values of m1, m2, m3 "<<endl;
	cin>>m1>>m2>>m3;
	if(coprime(m1,m2,m3))
	{
		M=m1*m2*m3;
		M1=M/m1;
		M2=M/m2;
		M3=M/m3;
		
		X1=minverse(M1,m1);
		X2=minverse(M2,m2);
		X3=minverse(M3,m3);
		X=(a1*M1*X1+a2*M2*X2+a3*M3*X3)%M;
		cout<<"output = "<<X;
	}
}
