#include<iostream>
using namespace std;
void showGetline() {
	char str[50];
	cout << "输入:\n";
	cin.getline(str, 50);
	cout << "输出：\n";
	cout << str;
}
void test() {
	char str[100] = { 0 };
	cin.getline(str, 100);

	char c1 = 0, c2 = 0;
	char str1[100] = { 0 };
	int p = 0;
	for (int i = 0; i < 100; i++) {
		if ((i == 0 || str[i] != str[i - 1]) && (i == 99 || str[i] != str[i + 1])) {
			str1[p] = str[i];
			p++;
		}
		if (str[i] == '\0') {
			break;
		}
	}
	cout << str1;
}
void showStrcpy() {
	char source[100] = { "one" };
	char target[100];
	// 如果strcpy有提醒，那么推荐用strcpy_s
	// strcpy_s(target, source);
	strcpy(target, source);
	cout << "source is " << source << endl;
	cout << "after strcpy " << endl;
	cout << "target is " << target << endl;
}
int one() {
	char a = 0;
	cout << sizeof(a);
	return 0;
}