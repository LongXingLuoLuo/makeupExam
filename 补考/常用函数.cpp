#include<iostream>
using namespace std;

//ð������
void sort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1; j++) {
			// ��������
			if (arr[i] > arr[j]) {
				//����Ԫ��
				swap(arr[i], arr[j]);
			}
		}
	}
}

void jiegou() {
	int exp = 0;

	// expΪ�߼����ʽ����bool��������

	if ( exp ) {
		//��������ִ����һ��
	}
	else {
		// ��������ִ����һ��
	}

	// expΪ char ,int ����ö������ʱ
	switch (exp) {
	case 1: {
		// ��exp == 1ʱ
		// ִ�в���


		//break����ѡ��
		break;
		}
	case 2: {
		// ��exp == 2 ʱ
		
		//��û��break ,���һֱ����ƥ�䣬
		//ֱ��break���ߵ����β
	}
	default: {
		// ƥ������ֵ
		// ���Ϸ�û��breakʱ��һ����ִ��
	}
	}
}

void xunhuan() {
	bool exp = 0;
	int n = 0;
	

	for (int i = 0; i < n; i++) {

	}
	
	// ��ͬ��for(;exp;)
	while (exp) {

	}

	do {

	} while (exp);
}
int two() {

	for (int i = 0; i < 10; i++) {
		if (i == 6) {
			// ѭ�����break
			break;
		}
	}
	return 0;
}