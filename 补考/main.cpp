#include<iostream>
using namespace std;

class Student {
public:
	Student(const char* name) {
		strcpy_s(this->name, name);
	}
	char* getName() {
		return this->name;
	}
private:
	char name[50];
};

int three() 
{
	return 0;
}