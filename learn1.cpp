/*
命名空间是一种将标识符分组的机制，用来避免标识符之间的冲突。
命名空间可以包含变量，函数或者其他的命名空间
namespace namespace_name{
    int varl;
    void funcl();
    namespace sub_namespace 1{
        //sub-namespace content
    }
}

*/

#include <iostream>
using namespace std;

namespace area
{
    int age = 18;
    void fun()
    {
        cout << "age=" << age << endl;
    }
    namespace sub_area
    {
        void fun()
        {
            cout << "hello" << endl;
        }
        //在不同的命名空间下，重名没问题
    }
}


int main()
{

    cout << "Hello World!\n" << endl;

    //定义数组，及数组初始化：
    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };

    for (int i = 0;i < 10;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    cout << "\n" << endl;

    for (int i = 0;i < 10;i++) {
        cout << arr[i] << endl;
    }

    //命名空间：
    //在使用标识符时，用域解析运算符"::"指明该标识符属于哪个命名空间
    //没有指定命名空间默认使用全局命名空间
    area::fun();
    area::sub_area::fun();

    return 0;
}

