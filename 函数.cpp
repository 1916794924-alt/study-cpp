#include <iostream>
using namespace std;
/*
函数的定义:
返回值类型 函数名 (参数列表){
   函数体语句
   return表达式
}
*/
double sum_n(double s1, double s2) {
    return s1 + s2;
}
/*
值传递:
函数swap中num_n1,num_n2两个形参，在main中有num1,num2两个实参，形参的值发生改变不会改变实参
num1,num2把数值传递给num_n1,num_n2后，经过swap函数，num_n1,num_n2发生改变，但num1,num2不会改变
*/

void  swap(double num_n1,double num_n2) {

    cout << "经过swap函数前的num_1的值为" << num_n1 << endl;
    cout << "经过swap函数前的num_2的值为" << num_n2 << endl;

    int temp = num_n1;
    num_n1 = num_n2;
    num_n2 = temp;

    cout <<"经过swap函数后的num_1的值为" << num_n1 << endl;
    cout << "经过swap函数后的num_2的值为" << num_n2 << endl;

    return;                          //返回值类型为void时，可以写return，也可不写 
}
int main()
{
    double num1;
    double num2;
    cin >> num1 >> num2;

    int sum = sum_n(num1, num2);
    cout << sum << endl;

    cout << "经过swap函数前的num1的值为" << num1 << endl;
    cout << "经过swap函数前的num2的值为" << num2 << endl;
    swap(num1, num2);
    cout << "经过swap函数后的num1的值为" << num1 << endl;
    cout << "经过swap函数后的num2的值为" << num2 << endl;
    //函数常见样式：无参无返，无参有返，有参无返，有参有返
    return 0;
}