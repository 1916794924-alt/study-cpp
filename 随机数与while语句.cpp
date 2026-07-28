#include<iostream>
using namespace std;

int main()
{
	//随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//利用系统生成随机数
	int num = rand() % 100 + 1;
	int val = 0;
	while (val!=num) {
		cin >> val;	//玩家进行猜测
		if (val > num) {
			cout << "输入的数过大" << endl;
		}
		else if (val < num) {
			cout << "输入的数过小" << endl;
		}
		else {
			cout << "恭喜你猜对了" << endl;
		}
	}
}