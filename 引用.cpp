#include <iostream>
using namespace std;

void swap1(int a, int b) //值传递
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int* a, int* b) //指针传递
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap3(int& a, int& b) //引用传递，引用作为函数参数时，形参就是实参的别名，形参的改变会直接影响实参
{
	int temp = a;
	a = b;
	b = temp;
}

int& test1(int& t) //引用作为函数参数时，形参就是实参的别名，形参的改变会直接影响实参
{
	t = 20;
	return t;
}
int& test2()
{
	static int t = 10; //静态变量(存放在全局区)的生命周期是整个程序运行期间，全局区上的数据在程序结束后系统释放，返回引用不会出错
	return t;
}

int main()
{
	//引用的本质是在C++内部实现了一个指针常量,指向一个变量的内存地址
	int a=10, b=100;
	int& ref = a;                        //使用引用时必须初始化，初始化后引用就不能再指向其他变量了
	ref = b;                             //此时ref指向的还是a，只是把b的值赋给了a
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "ref = " << ref << endl;

	int c = 10;
	int d = 1000;
	cout<<"\n值传递:"<<endl;
	swap1(c, d);                         //值传递,形参不会改变实参的值.c还是10，d还是1000
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	cout << "指针传递:" << endl;
	swap2(&c, &d);                       //指针传递,形参改变了实参的值.c变成1000，d变成10
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	cout << "引用传递:" << endl;
	swap3(c, d);                         //引用传递,形参改变了实参的值.c重新变回10，d重新变回1000
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	//引用作为函数返回值:
	int t = 9;
	cout << "\nt = " << t << endl;
	int& ref1 = test1(t);
	cout << "t = " << t << endl;
	cout << "ref1 = " << ref1 << endl;

	int& ref2 = test2();
	cout << "ref2 = " << ref2 << endl;

	test2() = 2000;//函数的返回值是一个引用，返回的是t的别名，所以可以直接赋值
	int ref3 = test2();
	cout << "ref3 = " << ref3 << endl;

	return 0;
}