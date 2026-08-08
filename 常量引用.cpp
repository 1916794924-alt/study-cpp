#include <iostream>
using namespace std;

void showValue(const int& value) //常量引用作为函数参数
{
	//value++; //错误，不能通过常量引用修改其值
	cout << "Value = " << value << endl;
}

int main()
{
	//常量引用:主要用来修饰函数参数，防止在函数中修改传入的实参，同时也可以提高效率，避免不必要的拷贝操作。
	//常量引用是指引用一个常量值，不能通过该引用修改其值。
	
	//int& ref = 10;//错误，不能将常量赋值给非常量引用
	const int& ref_s = 100;//正确，常量引用可以引用常量值  加上const之后编译器将代码修改 int temp = 10;const int & ref_s = temp;
	cout << "ref_s = " << ref_s << endl;

	int a = 10;
	const int& ref = a;                //正确，常量引用可以引用非常量值
	//ref = 20;                        //错误，不能通过常量引用修改其值

	showValue(ref);                    //传递常量引用作为函数参数
	cout << "ref = " << ref << endl;

    return 0;
}