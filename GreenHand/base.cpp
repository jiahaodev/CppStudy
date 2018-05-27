#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
/* 这是注释*/
/*c++ 注释也可以跨行
 *
 *
 */
using namespace std;

typedef unsigned short int  usInt;
//#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
const int  LENGTH = 10;

int max(int num1,int num2=1000)
{
    int result;
    if(num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}

double getAverage(int arr[],int size)
{
    int i,sum=0;
    double avg;
    for(i=0;i<size;++i)
    {
        sum += arr[i];
    }
    avg = double(sum)/size;
    return avg;
}


int * getRandom()
{
    static int r[10];
    srand((unsigned)time(NULL));
    for(int i =0;i<10;i++)
    {
        r[i] = rand();
        cout << r[i]<<endl;
    }
    return r;
}

/**

int main()
{
//    usInt a = 100;
//    enum color { red, green, blue } ;
//    color c = green;
//    int i,j,k;
//    char c2,ch;
//    float f,salary;
////    double d;
//    int d =3,f = 5;

    cout << "Hello world!" << endl;
    cout << "Has Changed!" << endl;


    int a  = 10;
    while(a <= 20)
    {
        cout << "a的值："<< a << endl;
        a ++;
    }

    a = 10;
    do
    {
        cout << "a的值："<< a << endl;
        a ++;
    }while(a <20);

    for(int i = 10;i<=20;i++)
    {
        cout << "i的值："<< i << endl;
    }


    int my_array[5] = {1,2,3,4,5};
    string str("some string");
    for (int &x: my_array)
    {
        x *=2;
        cout << x <<endl;
    }

    for (auto &x: my_array)
    {
        x *=2;
        cout << x <<endl;
    }

    for(auto &c:str)
    {
        c = toupper(c);
    }
    cout << str <<endl;


    char grade = 'D';
    switch(grade)
    {
    case 'A':
        cout << "Good job"<<endl;
        break;
    case 'B':
    case 'C':
        cout <<"That's ok" <<endl;
        break;
    case 'D':
        cout << "Pass" <<endl;
        break;
    case 'F':
        cout << "Try again" <<endl;
        break;
    default:
        cout << "Invalid grade" << endl;
        break;
    }

    cout << "您的成绩是 " << grade << endl;

    int y = 1000;
    int var = (y <1000) ? 30 : 40;
    cout << "var:" << var <<endl;

    cout << max(100,15)<<endl;
    cout << max(100)<<endl;

    //设置种子
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++)
    {
        int j = rand();
        cout << "rand:" <<j<<endl;
    }

    //数组用法
    int n[10];
    for(int i=0;i<10;i++)
    {
        n[i] = i + 100;
    }
    cout << "Element" <<setw(13) <<"value"<<endl;
    for(int j=0;j<10;j++)
    {
        cout <<setw(7) << j << setw(13) <<n[j]<<endl;
    }

    //多维数组
    int a_array[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout << "a["<<i<<"]["<<j<<"]:";
            cout << a_array[i][j]<<endl;
        }
    }

    //带指针的数组
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;

    p = balance;
    for(int i=0;i<5;i++)
    {
        cout << *(p + i) <<endl;
        cout << *(balance + i ) <<endl;
        cout << balance[i] <<endl;
    }
    int balance2[5] = {1000, 2, 3, 17, 50};
    cout << "avg:" <<getAverage(balance2,5)<<endl;

    int *pRandom = getRandom();
    for(int i =0;i<10;i++)
    {
        cout << *(pRandom+i)<<endl;
    }

    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;
    str3 = str1;
    cout << "str3:" << str3 << endl;
    str3 = str1 + str2;
    cout <<"str1 + str2:" <<str3<<endl;
    len = str3.size();
    cout << "str3.size():" << len <<endl;

    //指针
    int var1;
    char var2[10];
    cout << "&var1:" << &var1 <<endl;
    cout << "&var2:" << &var2 <<endl;

    int varInt = 20;
    int *ip;
    ip = &varInt;
    cout << varInt <<endl;
    cout << ip << endl;
    cout << *ip <<endl;

    int *nullPtr = NULL;
    cout << nullPtr << endl;

    char errstr[] = "Unable to read....";

    cerr << "Error message : " << errstr << endl;



    return 0;
}
*/
