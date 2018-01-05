// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。


#include "stdafx.h"
#include<iostream>
#include<string>
#include"test.h"

using namespace std;

extern int num;//num是test.cpp里定义的int num = 101;，在此文件里用需要声明extern int num;
string str1 = { "sddddgf" };

int main()
{
	CoutStr();
	CoutNum();
	cout << num;
}

