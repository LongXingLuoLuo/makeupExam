#include<iostream>
using namespace std;
class Person
{
private:
	char* name;
	int age;
public:
	Person(char * pname,int page)
	{
		this->name = new char[strlen(pname) + 1];
		strcpy(this->name, pname);
		this->age = page;
		cout << "one person is created" << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "one person is destoryed" << endl;
	}
};

int seven()
{
	char name[] = { "one" };
	Person person(name,12);
	return 0;
}