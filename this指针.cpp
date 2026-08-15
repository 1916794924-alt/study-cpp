#include<iostream>
using namespace std;
//this指针用途:
//1.当形参和成员变量同名时，this指针可以用来区分它们。this->成员变量名
//2.在类的非静态成员函数中，this指针可以用来返回调用该成员函数的对象本身，从而实现链式调用。return *this;
class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void showPerson() {
		if (this == NULL || (this->name == "" && this->age == 0))
		//this指针为NULL，说明对象不存在.通过this==NULL判断对象是否存在防止空指针访问成员变量造成程序崩溃
		{
			cout << "对象不存在" << endl;
			return; 
		}
		cout << "name:" << this->name << endl;
		cout << "age:" << this->age << endl;
	}

	void show() {
		cout<<"show成员函数被调用"<<endl;
	}
	Person &copy(Person &p) {
		this->name += p.name;
		this->age += p.age;
		return *this;
	}
private:
	string name;
	int age;
};

int main() {
	Person p("jzh", 20);
	p.showPerson();

	Person p2("jzh2", 22);
	p2.showPerson();

	cout << endl;
	p.copy(p2);
	p.showPerson();

	cout << endl;
	p.copy(p2).copy(p2);//链式调用
	p.showPerson();


	cout << endl;
	Person* p3 = NULL;
	p3->show(); //空指针调用成员函数，this指针为NULL，this->name和this->age访问时会报错
	p3->showPerson(); //空指针调用成员函数，this指针为NULL，this->name和this->age访问时会报错

	return 0;
}
//this指针的本质是一个指针常量，指针的值不能改变，指针的指向不能改变，但是指针所指向的内容是可以改变的。
//Person *const this; //指针常量