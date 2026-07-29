#include <iostream>
using namespace std;

int main()
{
	//指针的定义 数据类型 * 指针变量名
	int a = 10;
	//指针记录变量a的地址
	int* p;
	p = &a;
	//或者可以直接 int *p= &a;
	double pai = 3.14;
	double* t = &pai;

	cout << "a = " << a << endl;
	cout << "a的地址为" << &a << endl;

	//指针的使用:
	//通过解引用找到指针指向的内存
	//在指针前加*号，表示解引用如: *p , *t ,找到指针指向的内存中的数据 
	cout << "*p = " << *p << endl;     //输出p所指向的a的值
	cout << p << endl;      //输出a的地址
	cout << "*t = " << *t << endl;
	cout << t << endl;
	*p = 100;
	cout << "*p = " << *p << endl;
	cout << "a = " << a << endl;

	//指针所占用的内存空间
	cout << "sizeof(double*)=" << sizeof(double*) << endl;
	cout << "sizeof(t)=" <<sizeof(t) << endl;            //上下两个输出结果是相同的
	cout << "sizeof(int*)=" <<sizeof(int*) << endl;
	cout << "sizeof(float*)=" <<sizeof(float*) << endl;
	cout << "sizeof(char*)=" << sizeof(char*) << endl;
	//32位操作系统中，指针占4个字节空间大小，不管什么数据类型
	//64位操作系统中，指针占8个字节空间大小，不管什么数据类型

	return 0;
}