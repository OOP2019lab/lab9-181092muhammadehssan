#include"Address.h"
#include"Project.h"
#include"Employee.h"
using namespace std;
Employee::Employee(char* n, const Address&a)
{
	int x;
	x=strlen(n);
	this->emp_name=new char[x+1];
	for(int i=0;i<=x;i++)
	{
		this->emp_name[i]=n[i];
	}
	this->Add=&a;
		for(int i=0;i<2;i++)
	pro[i]=nullptr;
}
ostream& operator<<(ostream& out, const Employee&a)
{
	out<<a.emp_name<<endl;
	out<<*a.Add;
	for(int i=0;i<2;i++)
	if(a.pro[i]!=nullptr)
		out<<*a.pro[i];
	return out;
}

void Employee:: addProject(Project const *a )
{
	bool flag=1;
	for(int i=0;i<2;i++)
	{
		if(this->pro[i]== nullptr)
		{
			this->pro[i]=a;
			flag=0;
			break;
		}
		
	}
	if(flag!=0)
		cout<<"ALready filled"<<endl;
	
}
void Employee::removeProject(Project const* ptr)
{
	for (int i = 0; i < 2; i++)
	{
		if (pro[i] == ptr)
			this->pro[i] = nullptr;
		break;
	}
}
Employee::~Employee()
{
	
	if (this->emp_name != nullptr)
		delete[]this->emp_name;
}
const Employee& Employee::operator = (const Employee& a)
{
	
	this->Add = a.Add;

	int s = strlen(a.emp_name) + 1;
	if (this->emp_name != nullptr)
		delete[]emp_name;
	this->emp_name = new char[s];
	strcpy_s(this->emp_name, s, a.emp_name);
	for (int i = 0; i < 3; i++)
		this->pro[i] = a.pro[i];
	
	return *this;
}
Employee::Employee(const Employee& a)
{
	this->Add = a.Add;
	
	int x = strlen(a.emp_name) + 1;
	this->emp_name = new char[x];
	strcpy_s(this->emp_name, x, a.emp_name);
	for (int i = 0; i < 3; i++)
		this->pro[i] = a.pro[i];
}