#include "stdafx.h"
#include "stdlib.h"
#include <iostream>

using namespace std;

int main()
{
	//C++ 实例 - 标准输入输出
	/*
	int number;
	cout << "输入一个整数" << endl;
	cin >> number;
	cout << "输入的整数为：" << number << endl;;
	*/

	//杨辉三角

	int rows, coef = 1;
	rows = 20;

	for (int  i = 0; i < rows; i++)
	{
		for (int space = 1; space < rows - i; space++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;

			cout << coef << "   ";
		}
		cout << endl << endl;

	}




	system("pause");
}