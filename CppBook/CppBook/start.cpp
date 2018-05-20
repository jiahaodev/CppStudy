#include <iostream>


//预处理器
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

using namespace std;

int eCount;
extern void  write_extern();

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
int global;
//函数声明
int test();
void func(void);

static int scount = 10; /*全局变量*/




int main(){

	/*初始化外部引用值*/
	eCount = 555;
	write_extern();


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
	cout << localc << endl;
	//全局变量
	global = locala + localb;
	int global = 10; //局部变量覆盖全局变量
	cout << global << endl;

	//C++常量
	//转义字符
	cout << "Hello\tWorld\n\n";

	int area;
	area = LENGTH * WIDTH;
	cout << WIDTH << endl;
	const  int cLength = 100;
	cout << cLength << endl;

	short int shorti;
	short unsigned int shortj;
	shortj = 50000;
	shorti = shortj;
	cout << shorti << " " << shortj << endl;


	//auto存储类
	auto autoF = 3.14;
	auto s("hello");
	auto z = new auto(9);
	//auto x1 = 5, x2 = 5.0, x3 = 'r';

	//register存储类
	register int miles;

	//static 存储类
	while (scount--)
	{
		func();
	}

	//C++运算符
	//算术运算符
	int testA = 21;
	int testB = 10;
	int testC;
	testC = testA + testB;
	cout << " testA + testB = " << testC << endl;
	testC = testA / testB;
	cout << " testA / testB = " << testC << endl;
	testC = testA % testB;
	cout << " testA % testB = " << testC << endl;
	//关系运算符
	if (testA == testB){
		cout << "Line1 - a == b" << endl;
	}
	else{
		cout << " Line2 -a != b" << endl;
	}
	//逻辑运算符
	if (testA && testB)
	{
		cout << "&&为真" << endl;
	}
	else
	{
		cout << "&&为假" << endl;
	}
	cout << "修改数值" << endl;
	testA = 0; testB = 23;
	if (testA && testB)
	{
		cout << "&&为真" << endl;
	}
	else
	{
		cout << "&&为假" << endl;
	}
	bool testT = true;
	bool testF = false;
	if (testT || testF)
	{
		cout << "真" << endl;
	}
	else
	{
		cout << "假" << endl;
	}
	//赋值运算符
	int signA = 4;
	int signC;
	signC = signA;
	signC <<= 2;
	cout << "signC = " << signC << endl;
	signC >>= 4;
	cout << "signC = " << signC << endl;

	signC = 2;
	signC &= 2;
	cout << "signC = " << signC << endl;
	//杂项运算符
	cout << sizeof(signC) << endl;
	float floatA = 1.34;
	cout << sizeof(floatA) << endl;
	double doubleA = 1.32;
	cout << sizeof(doubleA) << endl;
	char *charA = floatA > doubleA ? "floatA大" : "doubleA大";
	cout << charA << endl;

	//C++循环
	int whileA = 10;
	while (whileA < 20)
	{
		cout << "whileA = " << whileA << endl;
		whileA++;
	}

	for (int i = 10; i < 20; i++)
	{
		cout << "i = " << i << endl;
	}

	int my_array[5] = { 1, 2, 3, 4, 5 };
	for (int &x : my_array)
	{
		x *= 2;
		cout << x << endl;
	}
	for (auto &x : my_array)
	{
		x *= 2;
		cout << x << endl;
	}

	//string strA ("some string");
	//// range for 语句  
	//for (auto &c : strA)
	//{
	//	c = toupper(c);
	//}
	//cout << strA << endl;
	
	int doA = 10;
	do
	{
		cout << "doA = " << doA << endl;
		doA += 1;
	} while (doA < 20);
	//循环嵌套
	int forI, forJ;
	for (forI = 2; forI < 100; forI++){
		for (forJ = 2; forJ <= (forI / forJ); forJ++){
			if (!(forI%forJ)){
				break; //如果找到，则不是质数
			}
		}
		if (forJ>(forI/forJ)){
			cout << forI << " 是质数"<<endl;
		}
	}

	//c++判断


	cin.get();
	return 0;
}


//测试函数调用
int test()
{
	cout << "函数调用中。。。" << endl;
	return 0;
}


void func(void)
{
	static int funci = 5; //局部静态变量
	funci++;
	cout << "i = " << funci;
	cout << ",count = " << scount << endl;
}

