#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
    int* p = arr;
    //利用指针遍历数组
    for (int i = 0;i <sizeof(arr)/sizeof(arr[0]);i++) {
        cout <<" " << *p;
        p++;
    }

    cout << endl << "采用while循环方式进行遍历:" << endl;

    int* t = arr;
    int* end = arr + sizeof(arr) / sizeof(arr[0]);
    while (t < end) {        //或者 t! = end
        cout << " " << *t++;
    }
    cout << endl;

    for (int x : arr) {
        cout << " " << x;
    }
    return 0;
}