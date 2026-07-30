#include <iostream>
using namespace std;

//值传递
void swap1(int n1,int n2) {
	int t = n1;
	n1 = n2;
	n2 = t;
}

//地址传递
void swap2(int *n1,int *n2) {
	int t = *n1;
	*n1 = *n2;
	*n2 = t;
}

int main()
{
	int a = 999;
	int b = 666;

	//值传递，不改变实参
	swap1(a, b);
	cout << "a = " << a <<"  " << "b = " << b << endl;
	
	//地址传递，可以改变实参
	swap2(&a, &b);
	cout << "a = " << a << "  " << "b = " << b << endl;

	return 0;
}