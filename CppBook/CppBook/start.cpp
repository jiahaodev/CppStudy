#include <iostream>
using namespace std;

//����һ��ע��
/*
��Ҳ��һ��ע��
*/

//�ⲿö��ֵ
enum time{
	first, second,
	third, forth = 4, fifth,
};
//��������
extern int inta, intb;
extern int intc;
extern float floatd;
//ȫ�ֱ���
int global ;
//��������
int test();
//Ԥ������
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


	//ö������
	enum color { red, green, blue };
	color c;
	c = blue;
	cout << c << endl;
	//��������2
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
	//��������3
	time fa = fifth;
	if (fa == 5){
		cout << "succeed!" << endl;
	}


	//��������
	int i = 5, j, k = 100;
	char ch, cf;
	float f, salary;
	double d;
	cout << i << ":" << ":" << k << endl;

	//�������
	int inta, intb, intc;
	float floatd;
	//ʵ�ʳ�ʼ��
	inta = 10; intb = 20; intc = inta + intb;
	cout << "C = :" << c << endl;
	test();


	//c++����������
	//�ֲ�����
	int locala, localb;
	int localc;
	locala = 10;
	localb = 20;
	localc = locala + localb;
	cout << localc <<endl;
	//ȫ�ֱ���
	global = locala + localb;
	int global = 10; //�ֲ���������ȫ�ֱ���
	cout << global << endl;

	//C++����
	//ת���ַ�
	cout << "Hello\tWorld\n\n";

	int area;
	area = LENGTH * WIDTH;
	cout << WIDTH<<endl;
	const  int cLength = 100;
	cout << cLength <<endl;
	


	cin.get();
	return 0;
}


//���Ժ�������
int test()
{
	cout << "���������С�����" << endl;
	return 0;
}