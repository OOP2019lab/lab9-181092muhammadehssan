#include"Address.h"
using namespace std;

Address::Address(char* house_N, char* Street_N, char * C,char* Couty)
{
	int x=0;
	x=strlen(house_N);
	house_Number=new char[x+1];
	for(int i=0;i<=x;i++)
	{
		house_Number[i]=house_N[i];
	}
	x=strlen(Street_N);
	street_Name=new char[x+1];
	int i;
	for(i=0;i<=x;i++)
	{
		street_Name[i]=Street_N[i];
	}
	street_Name[i]=NULL;
	x=strlen(C);
	
	city=new char[x+1];
	for(int i=0;i<=x;i++)
	{
		city[i]=C[i];
	}
	x=strlen(Couty);
	county=new char[x+1];
	for(int i=0;i<=x;i++)
	{
		county[i]=Couty[i];
	}

}
ostream& operator<<(ostream& out, const Address& a)
{
	out<<"House number is : "<<a.house_Number;
	out<<endl;
	out<<"Street number is : "<<a.street_Name;
	out<<endl;
	out<<"City name is : "<<a.city;
	out<<endl;
	out<<"Country Name is : "<<a.county;
	out<<endl;
	return out;

}
Address::Address(const Address&a)
{
	int x=strlen(a.city)+1;
	this->city=new char[x];
	for(int i=0;i<x;i++)
		this->city[i]=a.city[i];
	x=strlen(a.county)+1;
	this->county=new char [x];
	for(int i=0;i<x;i++)
		this->county[i]=a.county[i];
	x=strlen(a.street_Name)+1;
	this->street_Name=new char[x];
	for(int i=0;i<x;i++)
	{
		this->street_Name[i]=a.street_Name[i];
	}
	x=strlen(a.house_Number)+1;
	this->house_Number=new char [x];
	for(int i=0;i<x;i++)
	{
		this->house_Number[i]=a.house_Number[i];
	}

}
const Address & Address::  operator=(const Address& a)
{
	delete []this->city;
	delete []this->county;
	delete[]this->house_Number;
	delete[]this->street_Name;
	int x=strlen(a.city)+1;
	this->city=new char[x];
	for(int i=0;i<x;i++)
		this->city[i]=a.city[i];
	x=strlen(a.county)+1;
	this->county=new char [x];
	for(int i=0;i<x;i++)
		this->county[i]=a.county[i];
	x=strlen(a.street_Name)+1;
	this->street_Name=new char[x];
	for(int i=0;i<x;i++)
	{
		this->street_Name[i]=a.street_Name[i];
	}
	x=strlen(a.house_Number)+1;
	this->house_Number=new char [x];
	for(int i=0;i<x;i++)
	{
		this->house_Number[i]=a.house_Number[i];
	}
	return *this;
}
Address::~Address()
{
	delete[] house_Number;
	delete []street_Name;
	delete[] city;
	delete[] county;
}