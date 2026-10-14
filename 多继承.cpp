#include<iostream>
using namespace std;
//多继承语法
//多继承可能会引发父类中有同名成员出现，需加作用域区分
class Base1 {
public:
	int m_a = 100;//4
};
class Base2 {
public:
	int m_a = 1000;
	int m_b = 10;
};
class Son :public Base1, public Base2 {
public:
	string str = "jhz";//40
	double score = 3.1;//12

};

void test01() {
	Son s;
	cout << "sizeof(s) = " << sizeof(s) << endl;
	cout << "Baes1::int m_a = " << s.Base1::m_a << endl;
	cout << "Baes2::int m_a = " << s.Base2::m_a << endl;
}
int main() {
	test01();

	return 0;
}