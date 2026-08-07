#include <iostream>
using namespace std;

//new操作符的作用:由程序员手动在堆区域开辟数据，也要手动释放，释放用操作符delete
//语法: new 数据类型

int func()
{
	int* p = new int; //在堆区开辟一个int类型的空间
	*p = 10;          //给这个空间赋值
	cout << *p << endl;
	delete p; //释放空间
	return 0;
}

int * test01()
{
	int* p = new int(10); //在堆区开辟一个int类型的空间，并赋值为10
	
	return p;
}

void print()
{
	int* p = test01();
	cout << *p << endl;
	delete p;
}
void test02()
{
	int* arr = new int[10]; //在堆区开辟一个int类型的数组空间
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1; //给这个数组空间赋值
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " "; //输出这个数组空间的值
	}
	cout << endl;
	delete[] arr; //释放数组空间
}
int main()
{
	func();
	print();
	test02();

	system("pause");
	return 0;
}