#include<iostream>
using namespace std;
int len(char* ch)
{
	int sum = 0;
	while (ch[sum] != NULL)
	{
		sum++;
	}
	return sum;
}
void cpy()
{
	char ch1[10] = "one";
	char ch2[10];
	for (int i = 0; i < 10; i++)
	{
		cout << (int)ch1[i] << '\t';
	}
	cout << endl;
	strcpy(ch2, ch1);
	for (int i = 0; i < 10; i++)
	{
		cout << (int)ch2[i] << '\t';
	}
	cout << endl;
}
int main()
{
	char ch1[10] = "one";
	// ch2����ӦΪstrlen(ch1) + 1 , ���ж��1ΪNULL��λ��
	char* ch2 = new char[strlen(ch1) + 1];
	strcpy(ch2, ch1);
	
}