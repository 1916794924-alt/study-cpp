#include<iostream>
using namespace std;
/*
数据输入：
1.整型
2.浮点型
3.字符型
4.字符串型
5.布尔类型

if语句，else if语句，else语句
*/
int main() {
	/*
	int a;
	cout << "给a赋值" << endl;
	cin >> a;
	cout << a << endl;

	float b;
	cout << "给b赋值" << endl;
	cin >> b;
	cout << b << endl;

	char ch;
	cout << "给ch赋值" << endl;
	cin >> ch;
	cout << ch << endl;

	string str;
	cout << "给str赋值" << endl;
	cin >> str;
	cout << str << endl;

	bool ff;
	cout << "给ff赋值" << endl;
	cin >> ff;
	cout << ff << endl;
	*/
	//三目运算符
	int x = 1, y = 2, z;
	z = x > y ? x : y;
	cout << z << endl;

	switch (z) 
	{
	case 1:
		cout << "z的三目运算结果为" << z << endl;
		break;
	case 2:
		cout << "z的三目运算结果为" << z << endl;
		break;
	default:
		cout << "zws666" << endl;

	}

	return 0;
}