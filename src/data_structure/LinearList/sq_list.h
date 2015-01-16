#ifndef _SQ_LIST_H_
#define _SQ_LIST_H_

#include <iostream>

const LIST_INIT_SIZE = 100;
const LISTINCREMENT = 10;

typedef ElemType int

typedef struct{
	ElemType *elem;
    int length;
	int listsize;
	int incrementsize;
}SqList;

class MySqList{
	public:
 	  MySqlList();
	  ~MySqlList();

	  //Basic
	  void InitList(SqList &L, int maxsize = LIST_INIT_SIZE, int incresize = LISTINCREMENT);
      void Incrememt(SqList &L);
	  
	  int LocateElem(SqList L, ElemType e);
	  bool IsEmpty(SqList L);

	  void ListInsert(SqList &L, int i, ElemType e);
      void ListDelete(SqList &L, int i, ElemType &e);

	  void DestroyList(SqList &L);

	  //Advanced
	  void Union(SqList &La, SqList &Lb);
	  bool IsEqual(SqList La, SqList Lb);
	private:

};

#endif
