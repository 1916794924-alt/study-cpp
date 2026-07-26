
/*
数据结构：
(1)数据的逻辑结构：
   1.线性结构：比如链表，数组，堆栈，队列等都是线性结构
   2.非线性结构

(2)树形结构：
   1.有且仅有一个前驱
   2.有多个后继(分支)

(3)数据的图形结构：
   1.多个前驱和后继

(4)数据的物理结构：
   1.顺序映像
   2.非顺序映像
*/
#include <iostream>
using namespace std;

int main()
{
	//sizeof关键字
	short numn1 = 6;
	cout << "short占用的内存为" << sizeof(short) << endl;         //short为2
	int num2 = 6;
	cout << "int占用的内存为" << sizeof(int) << endl;           //int为4
	long num3 = 6;
	cout << "long占用的内存为" << sizeof(long) << endl;          //long为4
	long long num4 = 6;
	cout << "long long占用的内存为" << sizeof(long long) << endl;     //long long为8

	int arr[20] = { 0 };                       //20个int型数据，一个int型占用内存为4, 20个int型最终占用内存为80
	cout << sizeof(arr) << endl;

	//short < int < = long < = long long

	//字符用char修饰，用单引号''
	//单引号内只能有一个字符，不能是字符串
	char xxx = 'f';
	cout << xxx << endl;
	cout << "char占用的内存为" << sizeof(char) << endl;

	char xx = 'abcd';       //只能输出最后一个字符“d”
	cout << xx << endl;


	//C语言中的字符串:   char xx[]="abcd";
	//C++中的字符串用string修饰，用双引号""
	string yyy = "aaa";
	cout << yyy << endl;
	cout << "string占用的内存为" << sizeof(string) << endl;

	//数据类型转换:
	char a = 'a';
	//a-97
	//A-66
	cout << "字母a转换为int后的输出结果为"<<(int)a << endl;       //输出97，为字母a对应的ASCII的编码

	//转义字符
	//   \n:    换行符     \t:    水平制表符    \\:   表示"\"

	cout<<"\\" << endl;      //输出反斜杠"\"时，需要用到"\\"来进行输出，如果用"\"会报错
	cout << "aaa\thello" << endl;
	cout << "aaaaaa\thello" << endl;
	//\t:aaa\t总共占8个空位，aaa占3个空位，剩余5个空位；aaaaaa\t同样占8个空位，aaaaaa占6个空位，剩余2个空位
	// 
	//cout << "aaaaaaaaaa\thello" << endl;

	cout << "666\t666" << endl;
	cout << "666\t\t666" << endl;

	return 0;
}