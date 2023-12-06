//protecting on writing 
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	char FN[30],LN[20],DOB[9];
	cout<<"Enter Your First name"<<endl;
	cin.getline(FN,30);
	fflush(stdin);
	cout<<"Enter your last name"<<endl;
	cin.getline(LN,20);
	fflush(stdin);
	cout<<"Enter your DOB"<<endl;
	cin.getline(DOB,9);
	char PWD[13];
	int i,j,k;
	for(i=0,j=0;i<2;i++,j++)
	{
		PWD[j]=FN[i];
	}
	int L=strlen(LN);
	for(i=L-2;i<L;i++)
	{
		PWD[j]=LN[i];
		j=j+1;
	}
	//copy DOB in password
	for(k=0;DOB[k]!='\0';k++)
	{
		PWD[j]=DOB[k];
		j++;
	}
	PWD[j]='\0';
	cout<<endl;
	cout<<"Current Password : "<<PWD<<endl;
	
	char UPWD[13];
	fflush(stdin);
	cout<<"Enter password to open the file "<<endl;
	cin.getline(UPWD,13);
	UPWD[j]='\0';
	if(strcmp(PWD,UPWD)==0)
	{
		cout<<"Password Matched"<<endl;
		ofstream fout;
		fout.open("cryptographyfile.txt",ios::out);
		fout<<endl;
		fout<<"UPDATION"<<endl;
		fout.close();

	}
	else
	{
		cout<<"password Not matched"<<endl;
		goto xy;
	}
	xy:
		cout<<"EXIT";
}
