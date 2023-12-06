#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("ceaser_Plain.txt",ios::in);
	char P[100], C[100], D[100];
	fin.getline(P,100);
	cout<<"Content of file = "<<P<<endl;
	fin.close();
	
	int key,i,n;
	char c;
	n = strlen(P);
	cout<<"Enter key"<<endl;
	cin>>key;
	
	//Encryption
	for(i=0; i<n; i++)
	{
		c=P[i];
		if(c>='a' && c<='z')
		{
			c = c + key;
			if(c > 'z')
			{
				c = c - 'z' + 'a' - 1;
			}
			C[i] = c;
		}
		else if(c >='A' && c<='Z')
		{
			c = c + key;
			if(c > 'Z')
			{
				c = c - 'Z' + 'A' - 1;
			}
			C[i] = c;
		}
	}
	ofstream fout;
	fout.open("ceaser_Encrypted.txt", ios::out);
	fout<<"Encrypted text = ";
	fout<<C;
	fout.close();
	
	//decryption
	for(i=0; i<n; i++)
	{
		c=C[i];
		if(c>='a' && c<='z')
		{
			c = c - key;
			if(c > 'z')
			{
				c = c + 'z' - 'a' + 1;
			}
			D[i] = c;
		}
		else if(c >='A' && c<='Z')
		{
			c = c - key;
			if(c > 'Z')
			{
				c = c + 'Z' - 'A' + 1;
			}
			D[i] = c;
		}
	}
	fout.open("ceaser_Decrypted.txt", ios::out);
	fout<<"Decrypted text = ";
	fout<<D;
	fout.close();
}
