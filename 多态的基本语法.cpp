#include <iostream>
using namespace std;
/*
多态分为两类:
静态多态:函数重载和运算符重载属于静态多态,复用函数名
动态多态:派生类和虚函数实现运行时多态

静态多态和动态多态区别:
静态多态的函数地址早绑定-编译阶段确定函数地址
动态多态的函数地址晚绑定-运行阶段确定函数地址
*/
class Animal {
public:
    virtual void speak() //虚函数
    {
        cout << "动物在speak" << endl;
    }
};
class Cat:public Animal {
public:
    //重写虚函数: 函数返回值类型 函数名 参数列表 完全相同
    virtual void speak()//virtual可写可不写
    {
        cout << "小猫在speak" << endl;
    }
};
//地址早绑定,在编译阶段就已确定函数的地址,没有加virtual会直接执行animal.speak()
//要执行cat.speak()需要地址晚绑定,即函数的地址不能提前绑定,需要在运行阶段时绑定

//动态多态条件:
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态使用:
//父类的指针或引用 执行子类对象
void dospeak(Animal &animal)//Animal &animal = cat
{
    animal.speak();
}
void test(){
    Cat cat;
    dospeak(cat);
}
int main()
{
    test();
    return 0;
}
/*
多态原理:

Animal类内部结构:
vfptr(virtual function pointer虚函数表指针)-->vftable(virtual function table虚函数表):(&Animal::speak)

Cat类内部结构:
vfptr-->vftable:(&Animal::speak)------->(&Cat::speak)

当子类重写父类的虚函数后,子类中的虚函数表内部会替换成子类的虚函数地址,而父类中没发生改变
当父类的指针或引用指向子类对象时,发生多态：
Animal &animal = cat
animal.speak()
*/