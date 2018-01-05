#include<iostream>
#include"stdafx.h"
#include"test.h"
#include<string>

using namespace std;
extern string str1;//str1是main.cpp里定义的string str1 = { "sddddgf" };，在此文件里用需要声明extern string str1;
int num = 1039;

void CoutNum(void)
{
	cout<< num;
}

void CoutStr(void)
{
	cout << str1 << endl;
}
