#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include "framework.h"
#include "TestDll.h"
#include <iostream>
#include <stdio.h>
#include <cstring>
#include "string.h"

#pragma warning(disable : 4996) 
using namespace std;



// 这是导出变量的一个示例
TESTDLL_API int nTestDll=0;

// 这是导出函数的一个示例。
TESTDLL_API int fnTestDll(void)
{
    return 0;
}

TESTDLL_API int add(int a, int b)
{
    int value = a + b;
    cout << "这是一个dll文件,add value ";
    printf("%d", value);
    return value;
}

TESTDLL_API int GetPeopleIDCode(char *strTmp, int *strLen)
{
    /*cout << " 1=> ";
    printf("%d", *strTmp);
    cout << " 2=> ";
    cout << sizeof(strTmp);
    cout << " 3=> ";
    cout << &strTmp;
    char test = 123;
    strTmp = &test;*/
    //int a = 11;
    printf("\n\nEnter function");
    printf("\nthe strLen is point to  %p , addr is %X, *strLen is %d", strLen, &strLen, *strLen);
   // *strLen = 18;
    //printf("\nthe strLen is point to  %p , addr is %X, *strLen is %d", strLen, &strLen, *strLen);
    //strLen = &a;
   // printf("\nthe strLen is point to  %p , addr is %X, *strLen is %d", strLen, &strLen, *strLen);
    strncpy(strTmp, "510812199902020585", *strLen);
    printf("\nthe strTmp is point to  %p , addr is %X, *strTmp is %d", strTmp, &strTmp, *strTmp);

    printf("\nfunction return\n");

    return 1;
}


// 这是已导出类的构造函数。
CTestDll::CTestDll()
{
    return;
}


