#include <iostream>
using namespace std;

struct student {
	string name;
	int age;
	double score;
	int id;
};

//需要用指针才能使输入的数据传递回实参，是后面的输出数据正常
void scanfstudent(student *stu) {
	cout << "请按顺序输入姓名，年龄，学号，分数:" << endl;
	cin >> stu->name >> stu->age >> stu->id >> stu->score;
}

//值传递:
void printstudent1(student stu) {
	cout << "姓名: " << stu.name<<"  年龄: " << stu.age<<"  学号: " << stu.id <<"  分数: " << stu.score << endl;
}

//地址传递:
void printstudent2(student* stu) {
	cout << "姓名: " << stu->name << "  年龄: " << stu->age << "  学号: " << stu->id << "  分数: " << stu->score << endl;
}

int main()
{
	struct student stu;

	scanfstudent(&stu);
	printstudent1(stu);
	printstudent2(&stu);

	return 0;
}