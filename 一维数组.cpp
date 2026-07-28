#include<iostream>
using namespace std;

int main()
{
	//元素逆置
	int arr[100];
	int c;
	cout << "请输入要逆置的数的个数" << endl;
	cin >> c;
	cout << "请输入要逆置的"<<c<<"个数" << endl;
	for (int j = 0;j < c;j++) {
		cin >> arr[j];
	}
	for (int i = 0;i < c/2;i++) {
		int temp = arr[i];
		arr[i] = arr[c - 1 - i];
		arr[c - 1 - i] = temp;
	}
	cout << "逆置的结果为：" << endl;
	for (int i = 0;i < c;i++) {
		cout << arr[i];
	}
	cout << endl;

	//冒泡排序
	//总排序轮数=元素个数-1
	for (int i = 0;i < c - 1;i++) {
		//内层循环对比次数=元素个数-当前排序轮数-1
		for (int j = 0;j < c - 1 - i;j++) {
			//升序排序
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	cout<<"冒泡排序结果为" << endl;
	for (int k = 0;k < c;k++) {
		cout << arr[k];
	}
	return 0;
}