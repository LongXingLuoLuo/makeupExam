#include<iostream>
using namespace std;
void zhizhen() {
	int a = 0;
	int* p = &a;
	cout << "a is " << a << endl;
	(*p)++;
	cout << "a is " << a << endl;
	cout << "p is " << p << endl;
	cout << "*p is " << *p << endl;
}
	

int five() {
	int arr[2] = { 1,2 };
	cout << arr[0] <<"\t"<<arr[1] << endl;
	cout << *(arr) << "\t" << *(arr + 1) << endl;

	cin >> arr[0];
	return 0;
}