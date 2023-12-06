//06-Sep-2023
//vifgnere cipher using file

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	char P[100],K[100],NK[100],EN[100],DC[100];
	int i,j;
	ifstream fin;
	fin.open("vignere_Plain.txt", ios::in);
	fin.getline(P,100);
	cout<<endl;
	cout<<"Input PLain text = ";
	cout<<P<<endl;
	fin.close();
	
	fin.open("key.txt", ios::in);
	fin.getline(K,20);
	cout<<"Given Key = ";
	cout<<K<<endl;
	fin.close();
	
	//Same code as pervious vignere cipher
	//input plian text
	for(i=0;P[i]!='\0';i++)
	{
		if(P[i]>='a' && P[i]<='z')
		P[i]=P[i]-32;
	}
	cout<<"Your plaintext in capital : "<<P<<endl;
	for(i=0;K[i]!='\0';i++)
	{
		if(K[i]>='a' && K[i]<='z')
		K[i]=K[i]-32;
	}
	cout<<"Your Key in capital : "<<K<<endl;
	
	//Extent the key till the length of plain string
	int L1=strlen(P);
	int L2=strlen(K);
	for(i=0,j=0;i<L1;++i,++j)
	{
	if(j==L2)
	{
	j=0;
	}
	NK[i]=K[j];
	}
	NK[i]='\0';
	cout<<"Your extended key is  = "<<NK<<endl;
	//Encryption Using Vignere Cipher
	for(i=0;i<L1;i++)
	{
	EN[i]=((P[i]+NK[i]) %26) +'A';
	}
	EN[i]='\0';
	cout<<"Your encrypted text = "<<EN<<endl;
	
	//Deccryption Using Vignere Cipher
	for(i=0;i<L1;i++)
	{
	DC[i]=(((EN[i]-NK[i]) +26) %26) +'A';
	}
	DC[i]='\0';
	cout<<"Your decrypted text = "<<DC<<endl;
		
		
}
