#include <iostream>
using namespace std;

//封装:将属性和行为包装在类中,对外提供接口,隐藏内部实现细节
//封装的实现:通过访问控制符(public, protected, private)来实现封装
//class:类是对一类事物的抽象,类后面跟着类名,类名首字母大写,类中包含属性和行为
class Student{
public:
	//属性:描述事物的特征,类中定义的变量称为属性,属性可以有不同的数据类型,可以有不同的访问权限
	//行为:描述事物的动作,类中定义的函数称为行为,行为可以有不同的访问权限
	//类中的属性和行为统一成为成员----属性：成员变量,行为：成员函数
	string name;
	Student(string n, int a, int i, double s) {
		name = n;
		age = a;
		id = i;
		score = s;
	};//构造函数:用于初始化对象的属性,函数名与类名相同,没有返回值,可以有参数,可以重载
	void display() {
		cout << "姓名: " << name << "\t年龄: " << age << "\t学号: " << id << "\t成绩: " << score << endl;
	};
	int getAge() {
		return age;
	}
	void setAge(int a) {
		if (a >= 0 && a <= 150) {
			age = a;
		}
		else {
			cout << "年龄不合法" << endl;
		}
	}
	int getId() {
		return id;
	}
	void setId(int i) {
		if (i >= 0) {
			id = i;
		}
		else {
			cout << "学号不合法" << endl;
		}
	}
	double getScore() {
		return score;
	}
	void setScore(double s) {
		if (s >= 0 && s <= 100) {
			score = s;
		}
		else {
			cout << "成绩不合法" << endl;
		}
	}
protected: 
	int age;
	int id;
private:
	double score;
};

//访问权限：公共权限(public)、保护权限(protected)、私有权限(private)
//public:       成员 类内可以访问 类外可以访问
//protected:    成员 类内可以访问 类外不可以访问
//private:      成员 类内可以访问 类外不可以访问

int main()
{
	Student s("小号", 20, 66, 91.0);
	s.display();
	return 0;
}