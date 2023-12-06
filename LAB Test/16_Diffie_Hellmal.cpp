#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	long long int P,G,a,b,x,y,k1,k2;
	cout<<"enter the value of public key P and G"<<endl;
	cin>>P>>G;
	cout<<"Enter Private key for alice = ";
	cin>>a;
	cout<<"enter Public key for bob = ";
	cin>>b;
	x=fmod(pow(G,a),P);
	y=fmod(pow(G,b),P);

	//screct keys
	k1=fmod(pow(y,a),P);
	k2=fmod(pow(x,b),P);
	if(k1==k2)
	{
		cout<<"Diffie Hellman algorithm valides"<<endl;
		cout<<k1<<"  &  "<<k2<<"  are secret keys";
	}
}
