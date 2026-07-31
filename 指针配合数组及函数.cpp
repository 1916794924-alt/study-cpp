#include <iostream>
using namespace std;

//冒泡排序
void bubblesort(int* arr, int len, int choose) {
    if (choose == 1) {
        for (int i = 0;i < len - 1;i++) {
            for (int j = 0;j < len - 1 - i;j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else {
        for (int i = 0;i < len - 1;i++) {
            for (int j = 0;j < len - 1 - i;j++) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}
int main()
{
    int arr[100];
    int n,choose;             //输入n定义数组边界，choose定义升序或降序
    cout << "请输入n的值来确定要排序的数的数量:" << endl;
    cin >> n;
    if (n > 100 || n <= 0) {
        cout << "请输入0-100内的n的值" << endl;
        return 0;
    }
    cout << "升序输入1，降序输入0" << endl;
    cin >> choose;
    cout << "请输入你要排序的数:" << endl;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    bubblesort(arr, n, choose);
    cout<<"冒泡排序结果:" << endl;
    for (int i = 0;i < n;i++) {
        cout << arr[i] << "  ";
    }

    system("pause");
    return 0;
}