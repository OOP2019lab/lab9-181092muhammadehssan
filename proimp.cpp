#include"Project.h"
using namespace std;
Project::Project(char* na, int bud, int dur)
{
	int x=strlen(na);
	this->name=new char[x+1];
	for(int i=0;i<=x;i++)
	{
		this->name[i]=na[i];
	}
	this->budget=bud;
	this->duration=dur;
}
ostream& operator<<(ostream& out, const Project&a)
{
	out<<"Name of project is : "<<a.name<<endl;
	out<<"Budget is : "<<a.budget<<endl;
	out<<"Duration is : "<<a.duration<<endl;
	return out;
}
const Project & Project::  operator=(const Project& a)
{
	if(this->name!=nullptr)
	{
	delete[]this->name;
	int x=strlen(a.name);
	this->name=new char[x+1];
	strcpy_s(this->name,x,a.name);

	this->budget=a.budget;
	this->duration=a.duration;
	}
	return *this;
	
}
Project::Project(const Project& a)
{
	int x=strlen(a.name);
	this->name=new char[x+1];
	strcpy_s(this->name,x,a.name);
	this->budget=a.budget;
	this->duration=a.duration;
}
void Project::setBudget(int a)
{
	this->budget=a;
}
Project::~Project()
{
	if(this->name!=nullptr)
	delete[]this->name;
}