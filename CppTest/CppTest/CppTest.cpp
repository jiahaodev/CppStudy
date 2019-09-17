// CppTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;
class Base
{
private:
	virtual void display() { cout << "Base display()" << endl; }
	void show() { cout << "Base show()" << endl; }
public:
	void exec() { display(); show(); }
	void fun(string s) { cout << "Base fun(string)" << endl; }
	void fun(int a) { cout << "Base fun(int)" << endl; }//overload:两个fun函数在Base类的内部被重载  
	virtual int function() { return 0; }
};
class ClassA :public Base
{
public:
	void display() { cout << "ClassA display()" << endl; }//override:基类中display为虚函数，且参数列表一直，故此处为重写  
	void fun(int a, int b) { cout << "ClassA fun(int,int)" << endl; }//redefining:fun函数在Base类中不为虚函数，故此处为重定义  
	void show() { cout << "ClassA show()" << endl; }//redefining:理由同上  
	int function(int a) { return a; }//overload:注意这是重载而不是重写，因为参数列表不同，在编译时ClassA中其实还有个编译器自己偷偷加上的从Base继承来的int function(){};  
};
int main() {
	ClassA a;
	Base *base = &a;
	base->exec();//display()是ClassA的，因为覆盖了，show()是Base自己的  
	a.exec();//结果同上  
	a.show();//show()是ClassA重定义的  
	base->fun(1);//fun()是Base自己的，因为直接从对象base调用  
	a.fun(1, 1);//fun()是ClassA重定义的  
	system("pause");
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
