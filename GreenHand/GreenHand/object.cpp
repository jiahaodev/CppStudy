#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

class Box
{
public:
    double length;//���ӵĳ���
    double weight;//���ӵĿ��
    double height;//���ӵĸ߶�
    double getVolume(void);//�������
    void setLength(double len);
    void setWeight(double wei);
    void setHeight(double hei);

    //��������
//    double getVolume(void)
//    {
//        return length*weight*height;
//    }

};

//��Χ��������� ::
double Box::getVolume(void)
{
    return length*weight*height;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setWeight(double wei)
{
    weight = wei;
}

void Box::setHeight(double hei)
{
    height = hei;
}



//int main()
//{
//    Box box1;
//    Box box2;
//    double volume = 0.0;
//
//    box1.height = 5.0;
//    box1.length = 6.0;
//    box1.weight = 7.0;
//
//    box2.height = 10.0;
//    box2.length = 12.0;
//    box2.weight = 13.0;
//
//    volume = box1.height * box1.length * box1.weight;
//    cout <<"box1�������"<<volume<<endl;
//
//    volume = box2.height * box2.length * box2.weight;
//    cout <<"box2�������"<<volume<<endl;
//
//    Box box3;
//    box3.setHeight(5.0);
//    box3.setLength(6.0);
//    box3.setWeight(7.0);
//    volume = box3.height * box3.length * box3.weight;
//    cout <<"box3�������"<<volume<<endl;
//
//
//}


