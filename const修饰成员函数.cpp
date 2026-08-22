#include<iostream>
using namespace std;
/*
常函数:
成员函数后加关键字const称该函数为常函数
常函数内不可以修改成员属性
成员属性声明时加关键字mutable后，在常函数中依然可以修改
常对象:
声明对象前加const称该对象为常对象
常对象只能调用常函数
*/
class Person
{
public:
	void showPerson() const 
	//常函数  在成员函数后加const实际上是修饰的是this指针,让this指向的值夜不可被修改.
	//this指针是一个指向本类对象的指针(指针常量),而常函数中this指针是一个常指针
	//const Person* const this;  this指针是一个常指针 不能修改this指针的指向,也不能修改this指针所指向的值
	{
		m_Name += "666";
		cout << "姓名: " << m_Name << endl;
	}
	void func() {
		cout << "姓名: " << m_Name << endl;
	}

private:
	int age = 18;
	mutable string m_Name = "jhz";//mutable修饰的成员属性可以在常函数中被修改
};

int main() {
	const Person p; //常对象
	p.showPerson(); //常对象只能调用常函数

	return 0;
}