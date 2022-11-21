#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include <assert.h>


//#define N 1000
//typedef int SLDataType;	// �Ժ���Ҫ�洢��ͬ���͵����ݣ�����ֱ���޸�
//
////	��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size; // ��ʾ�����д洢�˶��ٸ�����
//}SL;
//
////	�ӿں��� - �������Ǹ���STL���
//void SeqListInit(SL* ps);	//	��ʼ������
////	��̬��������С�򲻹��ã��������˷ѿռ�
//void SeqListPushBack(SL* ps, SLDataType x);	//β��
//void SeqListPopBack(SL* ps);				//βɾ
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
//void SeqListPopFront(SL* ps);				//ͷɾ
//
//


typedef int SLDataType;	

//	��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size; 
	int capacity;	// ����ʵ���ܴ洢�Ŀռ������Ƕ��ٸ�
}SL;


//	�ӿں���
void SeqListInit(SL *ps);		// ��ʼ��˳���
	// �β� ��ʵ�ε���ʱ����������Ӱ��ʵ�� - ��ֵ����
	//	       ���Դ���ַ

void SeqListDestory(SL* ps);	// ʹ��������٣���ֹ�ڴ�й¶

void SeqListCheckCapacity(SL* ps);	//	�������+����

void SeqListPrint(SL* ps);			//	��ӡ����

void SeqListPushBack(SL* ps, SLDataType x);	//	β��

void SeqListPopBack(SL* ps);	// βɾ			

void SeqListPushFront(SL* ps, SLDataType x); // ͷ��

void SeqListPopFront(SL* ps);				//  ͷɾ

int SeqListFind(SL* ps, SLDataType x);	// �ҵ�x�����±꣬δ�ҵ�����-1

void SeqListInsert(SL* ps, int pos, SLDataType x);	// ָ��posλ�ò���x

void SeqListErase(SL* ps, int pos);		//	ɾ��posλ�õ�����

