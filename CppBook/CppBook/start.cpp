#include <iostream>


//Ԥ������
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

using namespace std;

int eCount;
extern void  write_extern();

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
int global;
//��������
int test();
void func(void);

static int scount = 10; /*ȫ�ֱ���*/




int main(){

	/*��ʼ���ⲿ����ֵ*/
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
	cout << localc << endl;
	//ȫ�ֱ���
	global = locala + localb;
	int global = 10; //�ֲ���������ȫ�ֱ���
	cout << global << endl;

	//C++����
	//ת���ַ�
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


	//auto�洢��
	auto autoF = 3.14;
	auto s("hello");
	auto z = new auto(9);
	//auto x1 = 5, x2 = 5.0, x3 = 'r';

	//register�洢��
	register int miles;

	//static �洢��
	while (scount--)
	{
		func();
	}

	//C++�����
	//���������
	int testA = 21;
	int testB = 10;
	int testC;
	testC = testA + testB;
	cout << " testA + testB = " << testC << endl;
	testC = testA / testB;
	cout << " testA / testB = " << testC << endl;
	testC = testA % testB;
	cout << " testA % testB = " << testC << endl;
	//��ϵ�����
	if (testA == testB){
		cout << "Line1 - a == b" << endl;
	}
	else{
		cout << " Line2 -a != b" << endl;
	}
	//�߼������
	if (testA && testB)
	{
		cout << "&&Ϊ��" << endl;
	}
	else
	{
		cout << "&&Ϊ��" << endl;
	}
	cout << "�޸���ֵ" << endl;
	testA = 0; testB = 23;
	if (testA && testB)
	{
		cout << "&&Ϊ��" << endl;
	}
	else
	{
		cout << "&&Ϊ��" << endl;
	}
	bool testT = true;
	bool testF = false;
	if (testT || testF)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "��" << endl;
	}
	//��ֵ�����
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
	//���������
	cout << sizeof(signC) << endl;
	float floatA = 1.34;
	cout << sizeof(floatA) << endl;
	double doubleA = 1.32;
	cout << sizeof(doubleA) << endl;
	char *charA = floatA > doubleA ? "floatA��" : "doubleA��";
	cout << charA << endl;

	//C++ѭ��
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
	//// range for ���  
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
	//ѭ��Ƕ��
	int forI, forJ;
	for (forI = 2; forI < 100; forI++){
		for (forJ = 2; forJ <= (forI / forJ); forJ++){
			if (!(forI%forJ)){
				break; //����ҵ�����������
			}
		}
		if (forJ>(forI/forJ)){
			cout << forI << " ������"<<endl;
		}
	}

	//c++�ж�


	cin.get();
	return 0;
}


//���Ժ�������
int test()
{
	cout << "���������С�����" << endl;
	return 0;
}


void func(void)
{
	static int funci = 5; //�ֲ���̬����
	funci++;
	cout << "i = " << funci;
	cout << ",count = " << scount << endl;
}

