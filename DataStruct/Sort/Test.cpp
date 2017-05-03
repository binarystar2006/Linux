/**************************************
*文件说明:Test.cpp
*作者:高小调
*创建时间:2017年05月03日 星期三 17时56分23秒
*开发环境:Kali Linux/g++ v6.3.0
****************************************/
#include"Sort.h"
#include<iostream>
using namespace std;
typedef void (*pFun1)(int[],int);
typedef void (*pFun2)(int[],int,int);

void PrintArr(int arr[],int size){
	for(int i=0; i<size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void TestSort(pFun1 Sort){
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	Sort(arr,sizeof(arr)/sizeof(*arr));
	PrintArr(arr,sizeof(arr)/sizeof(*arr));
}
int main(){
//	TestSort(BubbleSort);
//	TestSort(SelectSort);
	TestSort(InsertSort);
	return 0;
}