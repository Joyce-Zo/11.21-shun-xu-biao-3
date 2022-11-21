#include"SeqList.h"

//void TestSeqList1() 
//{
//	SL sl;
//	SeqListInit(&sl);
//	SeqListPushBack(&sl, 1);
//	SeqListPushBack(&sl, 2);
//	SeqListPushBack(&sl, 3);
//	SeqListPushBack(&sl, 4);
//	SeqListPushBack(&sl, 5);
//	SeqListPrint(&sl);
//
//	SeqListPopBack(&sl);
//	SeqListPopBack(&sl);
//	SeqListPopBack(&sl);
//	//SeqListPopBack(&sl);
//	//SeqListPopBack(&sl);
//	//SeqListPopBack(&sl);
//	//SeqListPopBack(&sl);
//	//SeqListPopBack(&sl);
//	SeqListPrint(&sl);
//
//	//SeqListPushBack(&sl, 1);
//	//SeqListPushBack(&sl, 2);
//	//SeqListPrint(&sl);
//
//	SeqListPushFront(&sl, 1);
//	SeqListPushFront(&sl, 2);
//	SeqListPrint(&sl);
//
//	SeqListDestory(&sl);
//}
//int main()
//{
//	TestSeqList1();
//	return 0;
// }

//void TestSeqList2()
//{
//	SL sl;
//	SeqListInit(&sl);
//
//	SeqListPushBack(&sl, 1);
//	SeqListPushBack(&sl, 2);
//	SeqListPushBack(&sl, 3);
//	SeqListPushBack(&sl, 4);
//	SeqListPushBack(&sl, 5);
//	SeqListPrint(&sl);
//
//	SeqListPushFront(&sl, 10);
//	SeqListPushFront(&sl, 20);
//	SeqListPushFront(&sl, 30);
//	SeqListPushFront(&sl, 40);
//	SeqListPrint(&sl);
//
//	SeqListPopFront(&sl);
//	SeqListPrint(&sl);
//
//
//	SeqListDestory(&sl);
//}

//void TestSeqList3()
//{
//	SL sl;
//	SeqListInit(&sl);
//	SeqListPushBack(&sl, 11);
//	SeqListPushBack(&sl, 22);
//	SeqListPushBack(&sl, 33);
//	SeqListPushBack(&sl, 44);
//	SeqListPushBack(&sl, 55);
//
//	SeqListPrint(&sl);
//
//	//printf("%d ",SeqListFind(&sl, 5));
//
//	SeqListInsert(&sl, 0, 666);
//	SeqListPrint(&sl);
//
//
//	int pos = SeqListFind(&sl, 44);
//	if (pos != -1)
//	{
//		SeqListInsert(&sl, pos, 888);
//	}
////	SeqListErase(&sl, 4);
//	SeqListPrint(&sl);
//
//	SeqListInsert(&sl,7 , 666);
//	SeqListPrint(&sl);
//
//	SeqListDestory(&sl);
//}

TestSeqList4()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 11);
	SeqListPushBack(&sl, 22);
	SeqListPushBack(&sl, 33);
	SeqListPushBack(&sl, 44);
	SeqListPushBack(&sl, 55);
	SeqListPrint(&sl);

	SeqListPushFront(&sl, 666);
	SeqListPrint(&sl);

	SeqListPushBack(&sl, 888);
	SeqListPrint(&sl);

	//SeqListErase(&sl, 1);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

int main()
{
	//TestSeqList1();
	//TestSeqList2();
	//TestSeqList3();
	TestSeqList4();
	return 0;
}
