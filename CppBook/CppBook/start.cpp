#include <iostream>
using namespace std;

//这是一个注释
/*
这也是一个注释
*/

//外部枚举值
enum time{
	first, second,
	third, forth = 4, fifth,
};
//变量定义
extern int inta, intb;
extern int intc;
extern float floatd;
//全局变量
int global ;
//函数声明
int test();
//预处理器
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(){
	cout << " Hello world !" << endl;
	cout << "size of char:" << sizeof(char) << endl;
	cout << "size of int :" << sizeof(int) << endl;
	cout << "size of short int" << sizeof(short int) << endl;
	cout << "size of long int" << sizeof(long int) << endl;
	cout << "size of float :" << sizeof(float) << endl;
	cout << "size of double :" << sizeof(double) << "\n";
	cout << "size of wchar_t:" << sizeof(wchar_t) << endl;

	typedef int tobeint;
	tobeint a = 100;
	cout << a << endl;
	int b = 100;
	cout << b << endl;


	//枚举类型
	enum color { red, green, blue };
	color c;
	c = blue;
	cout << c << endl;
	//测试用例2
	enum days { one, two, three } day, day1, day2, day3;
	day = one;
	day1 = two;
	day2 = two;
	day3 = three;
	switch (day){
	case one:
		cout << "one" << endl;
		break;
	case two:
		cout << "two" << endl;
		break;
	default:
		cout << "three" << endl;
		break;
	}
	//测试用例3
	time fa = fifth;
	if (fa == 5){
		cout << "succeed!" << endl;
	}


	//变量定义
	int i = 5, j, k = 100;
	char ch, cf;
	float f, salary;
	double d;
	cout << i << ":" << ":" << k << endl;

	//定义变量
	int inta, intb, intc;
	float floatd;
	//实际初始化
	inta = 10; intb = 20; intc = inta + intb;
	cout << "C = :" << c << endl;
	test();


	//c++变量作用域
	//局部变量
	int locala, localb;
	int localc;
	locala = 10;
	localb = 20;
	localc = locala + localb;
	cout << localc <<endl;
	//全局变量
	global = locala + localb;
	int global = 10; //局部变量覆盖全局变量
	cout << global << endl;

	//C++常量
	//转义字符
	cout << "Hello\tWorld\n\n";

	int area;
	area = LENGTH * WIDTH;
	cout << WIDTH<<endl;
	const  int cLength = 100;
	cout << cLength <<endl;
	


	cin.get();
	return 0;
}


//测试函数调用
int test()
{
	cout << "函数调用中。。。" << endl;
	return 0;
}