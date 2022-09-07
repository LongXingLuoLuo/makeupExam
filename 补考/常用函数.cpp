#include<iostream>
using namespace std;

//冒泡排序
void sort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1; j++) {
			// 排序条件
			if (arr[i] > arr[j]) {
				//交换元素
				swap(arr[i], arr[j]);
			}
		}
	}
}

void jiegou() {
	int exp = 0;

	// exp为逻辑表达式或者bool类型数据

	if ( exp ) {
		//若成立则执行这一步
	}
	else {
		// 不成立则执行这一步
	}

	// exp为 char ,int 或者枚举类型时
	switch (exp) {
	case 1: {
		// 当exp == 1时
		// 执行操作


		//break结束选择
		break;
		}
	case 2: {
		// 当exp == 2 时
		
		//若没有break ,则会一直向下匹配，
		//直到break或者到达结尾
	}
	default: {
		// 匹配任意值
		// 当上方没有break时，一定会执行
	}
	}
}

void xunhuan() {
	bool exp = 0;
	int n = 0;
	

	for (int i = 0; i < n; i++) {

	}
	
	// 等同于for(;exp;)
	while (exp) {

	}

	do {

	} while (exp);
}
int two() {

	for (int i = 0; i < 10; i++) {
		if (i == 6) {
			// 循环里的break
			break;
		}
	}
	return 0;
}