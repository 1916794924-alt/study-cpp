#include <iostream>
using namespace std;

int main()
{
    //二维数组的定义
    /*
    1.int arr[2][3]={1,2,3,4,5,6};
    2.int arr[2][3]={{1,2,3},{4,5,6}};
    3.int arr[][3]={1,2,3,4,5,6};
    */
    int arr[2][3] = { 1,2,3,4,5,6 };
    
    for (int i = 0;i < 2;i++) {
        for (int j = 0;j < 3;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //二维数组的名称用途
    //1.查看占用的内存空间大小
    cout << "int型二维数组占用空间大小为:"<<sizeof(arr) << endl;
    cout << "int型二维数组第一行占用空间大小为:" << sizeof(arr[0]) << endl;
    cout << "int型二维数组第一个元素占用空间大小为:" << sizeof(arr[0][0]) << endl;
    //二维数组的行数为=sizeof(arr)/sizeof(arr[0])
    //二维数组的列数为=sizeof(arr[0])/sizeof(arr[0][0])
    double arr2[2][3] = { 1,2,3,4,5,6 };
    cout << "double型二维数组占用空间大小为:" << sizeof(arr2) << endl;
    cout << "double型二维数组第一行占用空间大小为:" << sizeof(arr2[0]) << endl;
    cout << "double型二维数组第一个元素占用空间大小为:" << sizeof(arr2[0][0]) << endl;
    //2.可以查看二维数组的首地址
    cout << "二维数组的首地址是" << arr << endl;            //也可在(int)arr输出地址的十进制数
    cout << "二维数组第一行的首地址是" << arr[0] << endl;
    cout << "二维数组第二行的首地址是" << arr[1] << endl;

    system("pause");
    return 0;
}
