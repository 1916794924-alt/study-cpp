#include <iostream>
using namespace std;

//结构体定义:   struct 结构体名{结构体成员列表}

struct student
{
	string name;
	int age;
	int ID;
	double score[3];
}stu;                             //可在结构体末尾创建结构体变量

int main()
{
	struct student stu1;
	student stu2;                 //可以省略 struct
	//stu1.name = "jhz";
	//stu1.age = 18;
	//stu1.ID = 11;
	
	//struct student stu1 = {"jhz",18,11,106,134,124,89,97};
	cout << "请输入学生姓名:" << endl;
	cin >> stu1.name;
	cout << "请输入学生年龄:" << endl;
	cin >> stu1.age;
	cout << "请输入学生学号:" << endl;
	cin >> stu1.ID;
	cout << "请输入学生的三门学科的分数:" << endl;
	for (int i = 0;i < 3;i++) {
		cin >> stu1.score[i];
	}

	cout << "姓名:" << stu1.name << " ";
	cout << "年龄:" << stu1.age << " ";
	cout << "学号:" << stu1.ID << " ";
	cout << "分数:";
	for (int i = 0;i < 3;i++) {
		cout << stu1.score[i] << " ";
	}
	cout << endl;

	//结构体数组:
	//student s[3] = {{ "a", 18, 11, 1, 2, 3 },{ "b",18,12,1,2,3 },{ "c",19,13,1,2,3 }};
	student s[3] = 
	{ 
		{"a",18,11,1,2,3},
		{"b",18,12,1,2,3},
		{"c",19,13,1,2,3}
	};
	for (int j = 0;j < 3;j++) {
		cout << "姓名:" << s[j].name<<" ";
		cout << "年龄:" << s[j].age<<" ";
		cout << "学号:" << s[j].ID<<" ";
		cout << "分数:";
		for (int i = 0;i < 3;i++) {
			cout << s[j].score[i] << " ";
		}
		cout << endl;
	}

	//结构体指针:
	//通过 "->"进行访问结构体变量中的数据
	struct student* p;
	p = &stu1;

	cout << "姓名:" << p->name << " 学号:" << p->ID << " 年龄:" << p->age << endl;
	cout << "分数: ";
	for (int i = 0;i < 3;i++) {
		cout << p->score[i] << " ";
	}
	
	return 0;
}