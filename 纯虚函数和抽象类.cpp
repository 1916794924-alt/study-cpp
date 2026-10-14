#include <iostream>
using namespace std;

class Base {
public:
    //纯虚函数:
    //只要有纯虚函数，这个类就称为抽象类
    //抽象类特点:
    //1.无法实例化对象(无法构造对象)
    //2.抽象类的子类,必须重写父类中的纯虚函数,否则子类自身会变为抽象类
    
    virtual int func() = 0;//纯虚函数
};
class Extend:public Base {
public:
    virtual int func() {//重写父类中的纯虚函数
        cout << "纯虚函数已被重写" << endl;
        return 0;
    }
};

void test() {
    Extend* ex = new Extend;
    ex->func();
    delete(ex);
}
int main()
{
    test();

    return 0;
}