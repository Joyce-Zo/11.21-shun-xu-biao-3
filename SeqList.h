#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include <assert.h>


//#define N 1000
//typedef int SLDataType;	// 以后需要存储不同类型的数据，可以直接修改
//
////	静态顺序表
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size; // 表示数组中存储了多少个数据
//}SL;
//
////	接口函数 - 函数名是根据STL风格
//void SeqListInit(SL* ps);	//	初始化数组
////	静态：容量给小则不够用，给大则浪费空间
//void SeqListPushBack(SL* ps, SLDataType x);	//尾插
//void SeqListPopBack(SL* ps);				//尾删
//void SeqListPushFront(SL* ps, SLDataType x);//头插
//void SeqListPopFront(SL* ps);				//头删
//
//


typedef int SLDataType;	

//	动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size; 
	int capacity;	// 数组实际能存储的空间容量是多少个
}SL;


//	接口函数
void SeqListInit(SL *ps);		// 初始化顺序表
	// 形参 是实参的临时拷贝，不会影响实参 - 传值操作
	//	       所以传地址

void SeqListDestory(SL* ps);	// 使用完后销毁，防止内存泄露

void SeqListCheckCapacity(SL* ps);	//	检查容量+扩容

void SeqListPrint(SL* ps);			//	打印数据

void SeqListPushBack(SL* ps, SLDataType x);	//	尾插

void SeqListPopBack(SL* ps);	// 尾删			

void SeqListPushFront(SL* ps, SLDataType x); // 头插

void SeqListPopFront(SL* ps);				//  头删

int SeqListFind(SL* ps, SLDataType x);	// 找到x返回下标，未找到返回-1

void SeqListInsert(SL* ps, int pos, SLDataType x);	// 指定pos位置插入x

void SeqListErase(SL* ps, int pos);		//	删除pos位置的数据

