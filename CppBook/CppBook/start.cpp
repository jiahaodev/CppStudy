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

//cpp�����﷨
//  ����ע�� 
/*
	// //
	����ע��
	*/

#if 0
ע�͵��κδ���
#endif

//cpp��������
//�������Ͳ�������bool  �ַ���char  ����int  ������float ˫������double ������void  ���ַ���wchar_t
//�����������͵ķ��ţ� signed  unsigned  short  long 
//extern int exA = 1;
////��������
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

//typedef int feet; //�������ͱ���
//int main()
//{
//	feet distance = 12;
//	cout << "distance :" << distance << endl;
//	int testInt = 13;
//	cout << "testInt: " << testInt << endl;
//	system("pause");
//}


////ö��ֵ
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


//extern��ʹ��
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



////cpp ����
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


//cpp���η�
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


//cpp �洢��
//auto register static extern mutable thread_local(c++11)

//static
// �������� 
//void func(void);
//static int count2 = 10; /* ȫ�ֱ��� */
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
//// ��������
//void func(void)
//{
//	static int i = 5; // �ֲ���̬����
//	i++;
//	std::cout << "���� i Ϊ " << i;
//	std::cout << " , ���� count Ϊ " << count2 << std::endl;
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



//���������
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


////ָ���������
//int main()
//{
//	int var;
//	int *ptr;
//	int val; 
//	var = 300;
//	//��ȡvar�ĵ�ַ
//	ptr = &var;
//	//��ȡptr��ֵ
//	val = *ptr;
//	//val = *(&var);
//	cout << "value of var:" << var << endl;
//	cout << "value of var:" << ptr << endl;
//	cout << "value of var:" << val << endl;
//	system("pause");
//}


//ѭ�����
//int main()
//{
////while ѭ��
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

// do while ѭ��
//int a = 10;
//do{
//	cout << "a = :" << a << endl;
//	a++;
//} while (a < 10);


////forѭ��
//int my_array[5] = { 1, 2, 3, 4, 5 };
//// ÿ������Ԫ�س��� 2
//for (int &x : my_array)
//{
//	x *= 2;
//	cout << x << endl;
//}
//// auto ����Ҳ�� C++11 �±�׼�еģ������Զ���ȡ����������
//for (auto &x : my_array) {
//	x *= 2;
//	cout << x << endl;
//}

//string str("some string");
//// range for ���  
//for (auto &c : str)
//{
//	c = toupper(c);
//}
//cout << str << endl;



////ѭ��Ƕ��
//int i, j;
//for (i = 2; i < 1000; i++)
//{
//	for (j = 2; j <= (i / j);j++)
//	{
//		if (!(i%j))
//		{
//			break; //����ܹ���������������
//		}
//	}
//	if (j >(i / j))
//	{
//		cout << i << "������" << endl;
//	}
//}

//����ѭ��
//for (;;)
//{
//	cout << "This loop will run forever" << endl;
//}

//system("pause");

//}


//�ж����
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



////��������
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


//��������
//void swap(int, int);
//void swap(int *x, int *y);
//void swap(int &x, int &y);
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	cout << "����ǰ��a ��ֵ��" << a << endl;
//	cout << "����ǰ��b ��ֵ��" << b << endl;
//
//	/* ���ú���������ֵ
//	* &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ
//	* &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ
//	*/
//	//swap(&a, &b);
//
//	swap(a, b);
//
//	cout << "������a ��ֵ��" << a << endl;
//	cout << "������b ��ֵ��" << b << endl;
//
//	system("pause");
//	
//}
//
//// ��������
////void swap(int *x, int *y)
////{
////	int temp;
////	temp = *x; /* ���� x ��ֵ */
////	*x = *y;    /* �� y ��ֵ�� x */
////	*y = temp; /* �� x ��ֵ�� y */
////}
//
//
//// ��������
//void swap(int &x, int &y)
//{
//	int temp;
//	temp = x; /* �����ַ x ��ֵ */
//	x = y;    /* �� y ��ֵ�� x */
//	y = temp; /* �� x ��ֵ�� y  */
//
//	return;
//}



//
////����Ĭ��ֵ
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


////lamda���ʽ
//int main()
//{
//	[](int x, int y) ->
//		int {int z = x + y; 
//	         cout << z << endl; 
//			 return z;
//	    };
//	std::system("pause");
//}


////cpp��ѧ��
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




////cpp�����
//int main()
//{
//	int i, j;
//	//��������
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
////cpp����
//int main()
//{
//	//int n[10]; //��������
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	n[i] = i + 100;
//	//	//cout << n[i] << endl;
//	//}
//	//cout << "Element" << setw(13) << "Value" << endl;
//	//// ���������ÿ��Ԫ�ص�ֵ                     
//	//for (int j = 0; j < 10; j++)
//	//{
//	//	cout << setw(7) << j << setw(13) << n[j] << endl;
//	//}
//
//
//	////��ά����
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
//	////������ָ��
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
//	////������������
//	//// ���� 5 ��Ԫ�ص���������
//	//int balance[5] = { 1000, 2, 3, 17, 50 };
//	//// ����һ��ָ�������ָ����Ϊ����
//	////double avg = getAverage(balance, 5);
//	//double avg = getAverage(balance, 5);
//	//// �������ֵ
//	//cout << "ƽ��ֵ�ǣ�" << avg << endl;
//
//
//	//���ز�����������
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



//cppָ��
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



