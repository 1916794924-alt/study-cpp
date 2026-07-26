/*
引用：

类：一种自定义的数据类型，将数据和操作封装在一起
 定义方式：
 class{
   //访问属性
   //类中成员
 };

访问属性分三种:
public:公有成员可以在类内和类外直接访问
protected:保护成员，类中可以访问，类外不能直接访问
private:私有成员，类中可以访问，类外不能直接访问
*/
#include<iostream>

using namespace std;


class Student {

private:
    int id;
    int age;
    double fenshu;

public:

    char name[10] = "今何在";          //数据成员：变量
    int getAge() {
        return age;
    }
    void setAge(int AGE) {
        age = AGE;
    }

    int getId() {
        return id;
    }
    void setId(int ID) {
        id = ID;
    }

    double getfenshu() {
        return fenshu;
    }
    void setfenshu(double FenShu) {
        fenshu = FenShu;
    }

    void DonePaper() {                          //函数成员：函数
        cout << "学生正在考试" << endl;
    }

    void study_play() {
        DonePaper();
        cout << "学生在玩耍" << endl;
    }

};

int main()
{
	int a = 33550336;

	//定义引用
	//引用类型必须与变量类型相同
	int& b = a;
	
	//对引用的操作和对引用对应的变量的操作一样
    // cin >> b ;      控制台输入b的值
    b = 666;
	cout << a << endl;                                    //"<<endl"实现换行

    Student stu;
    //strcpy(stu.name, "今何在");
    cout << stu.name << endl;
    stu.setAge(18);
    cout << stu.getAge() << endl;
    stu.DonePaper();
    stu.study_play();

	return 0;
}