#include <iostream>
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
struct Employee{
	char first_name[16];
	int age;
}emp;

int main()
{
	/*emp.first_name = "zara";*/
	strcpy_s(emp.first_name, "zara");
	cout << emp.first_name << endl;
	system("pause");
}
