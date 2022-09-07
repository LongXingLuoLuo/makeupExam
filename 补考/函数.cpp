#include<iostream>
using namespace std;
/*
typedef Type;
Type value;


Type FuctionName(Type param1, Type param2) {
	
	// 执行操作
	// 也可以在这里进行return,
	// 但是需要注意这样做会直接结束函数
	return value;
}
*/

//传递数组
void fun1(int arr[10]) {

}

//传递数组首地址和数组长度
void fun2(int* arr, int len) {

}
int six() {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	fun1(arr);
	fun2(arr, 10);
	return 0;
}