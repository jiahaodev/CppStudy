#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cstring>

using namespace std;
int count3 = 100;
//test
//int main()
//{
//	cout << "Hello,world" << endl;
//	return 0;
//}

//cpp基本语法
//  单行注释 
/*
	// //
	多行注释
	*/

#if 0
注释掉任何代码
#endif

//cpp数据类型
//基本类型布尔类型bool  字符型char  整型int  浮点型float 双浮点型double 无类型void  宽字符型wchar_t
//可以修饰类型的符号： signed  unsigned  short  long 
//extern int exA = 1;
////函数声明
////int testDeclare();
//
//int testDeclare()
//{
//	return 100;
//}
//
//
//int main()
//{
//	int  d = 3;int  f = 5;
//	float a, b = 3, c;
//	cout << d << f << b << endl;
//
//	cout << testDeclare() << endl;
//
//
//	system("pause");
//
//}

//int testDeclare()
//{
//	return 100;
//}



//int main()
//{
//	cout << "Size of char: " << sizeof(char) << endl;
//	cout << "Size of int:  " << sizeof(int) << endl;
//	cout << "Size of short int: " << sizeof(short int) << endl;
//	cout << "Size of long int:" << sizeof(long int) << endl;
//	cout << "Size of float:" << sizeof(float) << endl;
//	cout << "Size of double:" << sizeof(double) << endl;
//	cout << "size of wchar_t:" << sizeof(wchar_t) << endl;
//	system("pause");
//}

//typedef int feet; //定义类型别名
//int main()
//{
//	feet distance = 12;
//	cout << "distance :" << distance << endl;
//	int testInt = 13;
//	cout << "testInt: " << testInt << endl;
//	system("pause");
//}


////枚举值
//int main()
//{
//	enum color {red,green,blue} ;
//	color c = blue;
//	//c = blue;
//	switch (c){
//	case red:
//		cout << "red" << endl;
//		break;
//	case green:
//		cout << "red" << endl;
//		break;
//	case blue:
//		cout << "blue" << endl;
//		cout << c << endl;
//		break;
//	default:
//		cout << "no color" << endl;
//		break;
//	}
//	system("pause");
//}


//extern的使用
//#include "b.h"
//#include "c.h"
//
//A_class local_post = { 1, 2, 3 };
//A_class next_post = { 10, 9, 8 };
//
//int main(int argc, char *argv[])
//{
//	A_class ret;
//	print("fist point", local_post);
//	print("second point", next_post);
//	ret = fun(local_post, next_post);
//	printf("the vector is (%d %d %d)\n", ret.x, ret.y, ret.z);
//	system("pause");
//	return 0;
//
//}



////cpp 常量
//#define LENGTH 10
//#define WIDTH 5
//#define NEWLINE '\n'
//
//int main()
//{
//	int x = 012;
//	int y = 0x12;
//	cout << x << " " << y << endl;
//
//	int area = LENGTH * WIDTH;
//	cout << area;
//	cout << NEWLINE;
//
//	const int LENGTH2 = 20;
//	const int WIDTH2 = 5;
//	const char NEWLINE2 = '\n';
//	int area2 = LENGTH2 * WIDTH2;
//	cout << area2;
//	cout << NEWLINE2;
//
//	system("pause");
//}


//cpp修饰符
//int main()
//{
//	short sh = 100000000;
//	signed si = 100000000;
//	short int i;
//	short unsigned int j;
//	unsigned short int j1;
//	cout << sh << endl;
//	cout << si << endl;
//
//	system("pause");
//}


//cpp 存储类
//auto register static extern mutable thread_local(c++11)

//static
// 函数声明 
//void func(void);
//static int count2 = 10; /* 全局变量 */
//
//int main()
//{
//	while (count2 --)
//	{
//		func();
//	}
//	system("pause");
//	return 0;
//}
//// 函数定义
//void func(void)
//{
//	static int i = 5; // 局部静态变量
//	i++;
//	std::cout << "变量 i 为 " << i;
//	std::cout << " , 变量 count 为 " << count2 << std::endl;
//
//}

//#include "support.h"
//int count3;
//extern void write_extern();
//
//int main()
//{
//	count3 = 15;
//	write_extern();
//	system("pause");
//}



//逗号运算符
//int main()
//{
//	int count, incr;
//	int var = (count = 19,incr = 10,count+1);
//	cout << var << endl;
//	system("pause");
//}


//
//struct Employee{
//	char first_name[16];
//	int age;
//}emp;
//
//int main()
//{
//	/*emp.first_name = "zara";*/
//	strcpy_s(emp.first_name, "zara");
//	cout << emp.first_name << endl;
//	system("pause");
//}


////指针运算符符
//int main()
//{
//	int var;
//	int *ptr;
//	int val; 
//	var = 300;
//	//获取var的地址
//	ptr = &var;
//	//获取ptr的值
//	val = *ptr;
//	//val = *(&var);
//	cout << "value of var:" << var << endl;
//	cout << "value of var:" << ptr << endl;
//	cout << "value of var:" << val << endl;
//	system("pause");
//}


//循环语句
//int main()
//{
////while 循环
//int a = 10;
//while (a < 20)
//{
//	cout << "a = :" << a << endl;
//	a++;
//}
//for (int a = 10; a <= 20;a++)
//{
//	cout << "a = : " << a << endl;
//}

// do while 循环
//int a = 10;
//do{
//	cout << "a = :" << a << endl;
//	a++;
//} while (a < 10);


////for循环
//int my_array[5] = { 1, 2, 3, 4, 5 };
//// 每个数组元素乘于 2
//for (int &x : my_array)
//{
//	x *= 2;
//	cout << x << endl;
//}
//// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
//for (auto &x : my_array) {
//	x *= 2;
//	cout << x << endl;
//}

//string str("some string");
//// range for 语句  
//for (auto &c : str)
//{
//	c = toupper(c);
//}
//cout << str << endl;



////循环嵌套
//int i, j;
//for (i = 2; i < 1000; i++)
//{
//	for (j = 2; j <= (i / j);j++)
//	{
//		if (!(i%j))
//		{
//			break; //如果能够整除，则不是质数
//		}
//	}
//	if (j >(i / j))
//	{
//		cout << i << "是质数" << endl;
//	}
//}

//无限循环
//for (;;)
//{
//	cout << "This loop will run forever" << endl;
//}

//system("pause");

//}


//判断语句
//int main()
//{
////	int a = 100;
////	if (a==10)
////	{
////		cout << "a == 10" << endl;
////	}
////	else if (a==30)
////	{
////		cout << "a == 30" << endl;
////
////	}
////	else
////	{
////		cout << "no found" << endl;
////	}
//
//	//char grade = 'B';
//
//	//switch (grade){
//	//case 'A':
//	//	cout << "Great" << endl;
//	//	break;
//	//case 'B':
//	//	cout << "Find no hope" << endl;
//	//	break;
//	//default:
//	//	cout << "Terrible" << endl;
//	//
//	//}
//
//	int a = 1000;
//	int b = 2000;
//	switch (a){
//	case 100:
//		cout << " outside A" << endl;
//		switch (b){
//		case 200 :
//			cout << " inside B" << endl;
//			break;
//		default:
//			cout << "no found B" << endl;
//		}
//
//		break;
//	default:
//		cout << " no found  A" << endl;
//	}
//
//
//	int test = 1;
//	bool result;
//	result = (test != 1) ? true : false;
//	cout << result << endl;
//
//	if (test == 1)
//	{
//		cout << boolalpha << true << endl;
//	}
//	else
//	{
//		cout << boolalpha << false << endl;
//	}
//
//	cout << result << endl;
//
//	system("pause");
//
//}



////函数声明
//int max(int, int);
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int ret = max(a, b);
//	cout << ret << endl;
//	system("pause");
//}
//
//int max(int a,int b)
//{
//	return a >= b ? a : b;
//}


//函数参数
//void swap(int, int);
//void swap(int *x, int *y);
//void swap(int &x, int &y);
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	cout << "交换前，a 的值：" << a << endl;
//	cout << "交换前，b 的值：" << b << endl;
//
//	/* 调用函数来交换值
//	* &a 表示指向 a 的指针，即变量 a 的地址
//	* &b 表示指向 b 的指针，即变量 b 的地址
//	*/
//	//swap(&a, &b);
//
//	swap(a, b);
//
//	cout << "交换后，a 的值：" << a << endl;
//	cout << "交换后，b 的值：" << b << endl;
//
//	system("pause");
//	
//}
//
//// 函数定义
////void swap(int *x, int *y)
////{
////	int temp;
////	temp = *x; /* 保存 x 的值 */
////	*x = *y;    /* 把 y 赋值给 x */
////	*y = temp; /* 把 x 赋值给 y */
////}
//
//
//// 函数定义
//void swap(int &x, int &y)
//{
//	int temp;
//	temp = x; /* 保存地址 x 的值 */
//	x = y;    /* 把 y 赋值给 x */
//	y = temp; /* 把 x 赋值给 y  */
//
//	return;
//}



//
////函数默认值
//int sum(int a , int b = 20)
//{
//	int result;
//	return 	result = a + b;
//}
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	cout << sum(a, b) << endl;
//	cout << sum(1000) << endl;
//	system("pause");
//}


////lamda表达式
//int main()
//{
//	[](int x, int y) ->
//		int {int z = x + y; 
//	         cout << z << endl; 
//			 return z;
//	    };
//	std::system("pause");
//}


////cpp数学库
//int main()
//{
//	short s = 10;
//	int i = -1000;
//	long l = 100000;
//	float f = 230.47;
//	double d = 200.374;
//	cout << sin(d) << endl;
//	cout << abs(i) << endl;
//	cout << floor(d) << endl;
//	cout << sqrt(f) << endl;
//	cout << pow(d,2) << endl;
//	system("pause");
//}




////cpp随机数
//int main()
//{
//	int i, j;
//	//设置种子
//	srand((unsigned)time(NULL));
//
//	for ( i = 0; i < 10; i++)
//	{
//		j = rand();
//		cout << "rand 1 : " << j << endl;
//	}
//	system("pause");
//}


//
////double getAverage(int arr[], int size)
//double getAverage(int *arr, int size)
//{
//	int  sum = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		//sum += arr[i];
//		sum += *(arr + i);
//	}
//	double avg = double(sum) / size;
//	return avg;
//}
//
//
//int * getRandom()
//{
//	static int r[10];
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		r[i] = rand();
//		cout << r[i] << endl;
//	}
//	return r;
//}
//
//
//int * getRandom2(int *p)
//{
//	/*static int r[10];*/
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = rand();
//		cout << *(p + i) << endl;
//	}
//	return p;
//}
//
//
////cpp数组
//int main()
//{
//	//int n[10]; //声明数组
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	n[i] = i + 100;
//	//	//cout << n[i] << endl;
//	//}
//	//cout << "Element" << setw(13) << "Value" << endl;
//	//// 输出数组中每个元素的值                     
//	//for (int j = 0; j < 10; j++)
//	//{
//	//	cout << setw(7) << j << setw(13) << n[j] << endl;
//	//}
//
//
//	////多维数组
//	//int a[5][2] = {
//	//	{0,0},
//	//	{1,2},
//	//	{2,4},
//	//	{3,6},
//	//	{4,8},
//	//};
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	for (int j = 0; j < 2; j++)
//	//	{
//	//		cout << "a[" << i << "][" << j << "]: ";
//	//		cout << a[i][j] << endl;
//	//	}
//	//}
//
//	////数组与指针
//	//double balance[] = { 1, 2, 3, 4, 5, 6 };
//	////double *p;
//	////p = balance;
//
//	//double *p  = balance;
//
//	//for (int i = 0; i < 6; i++)
//	//{
//	//	cout << "*(p + " << i << ") : ";
//	//	cout << *(p + i) << endl;
//	//}
//
//	//for (int i = 0; i < 6; i++)
//	//{
//	//	cout << "*(balance + " << i << ") : ";
//	//	cout << *(balance + i) << endl;
//	//}
//
//
//	////函数传递数组
//	//// 带有 5 个元素的整型数组
//	//int balance[5] = { 1000, 2, 3, 17, 50 };
//	//// 传递一个指向数组的指针作为参数
//	////double avg = getAverage(balance, 5);
//	//double avg = getAverage(balance, 5);
//	//// 输出返回值
//	//cout << "平均值是：" << avg << endl;
//
//
//	//返回参数带有数组
//	int arr[10];
//	int *p;
//	p = getRandom2(arr);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "*(p + " << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//	system("pause");
//}

//
//char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
//char greeting2[] = "Hello";
//
//int main()
//{
//	//cout << greeting << endl;
//	//cout << greeting2 << endl;
//
//	//char str1[11] = "Hello";
//	//char str2[11] = "world";
//	//char str3[11];
//	//char str4[12] = "lo";
//	//int len;
//
//	//strcpy_s(str3, str1);
//
//	//cout << str3 << endl;
//
//	//strcat_s(str1, str2);
//
//	//cout << str1 << endl;
//
//	//len = strlen(str1);
//	//cout << len << endl;
//
//	//cout << strcmp(str1, str2) << endl;
//
//	//char *pos = strchr(str1, 'l');
//	//cout << pos << endl;
//
//	//cout << strstr(str1, str4) << endl;
//
//	//string str1 = "Hello";
//	//string str2 = "world";
//	//string str3;
//	//int len;
//	//str3 = str1;
//	//cout << str3 << endl;
//	//str3 = str1 + str2;
//	//cout << str3 << endl;
//	//len = str3.size();
//	//cout << len << endl;
//
//	string http = "www.runoob.com";
//	cout << http.length() << endl;
//	http.append("/C++");
//	cout << http << endl;
//
//	int pos = http.find("/C++");
//	cout << pos << endl;
//	http.replace(pos, 4, "");
//	cout << http << endl;
//
//	int first = http.find_first_of(".");
//	int last = http.find_last_of(".");
//	cout << first << " " << last << endl;
//	cout << http.substr(first + 1, 2)<<endl;
//
//	system("pause");
//}



//cpp指针
int main()
{
	int var1;
	char var2[10];
	cout << &var1 << endl;
	cout << &var2 << endl;

	int var = 20;
	int *ip;
	ip = &var;
	cout << var << endl;
	cout << ip << endl;
	cout << *ip << endl;

	system("pause");
}



