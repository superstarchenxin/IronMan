#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

#include <iostream>
using namespace std;

typedef int ElemType;

typedef struct LinkNode{
	ElemType data;
	struct LinkNode *next;
}LNode, *LinkList;

class MyLinkList{
  public:
	MyLinkList();
	MyLinkList(ElemType A[], int n);
	~MyLinkList();
    MyLinkList(const MyLinkList &linklist);
	MyLinkList& operator = (const MyLinkList &linklist);

	//basic
	void CreateList(ElemType A[], int n);
	int Length();
	//LNode* LocateElem(ElemType e);
	void InsertPoint(LNode *pSrc, LNode *pIst);
	void DeletePoint(LNode *pDel, ElemType &e);
     
	//junior
	void InvertLinkList();
	void Union(LinkList &Lsrc);

	LNode* sortList(LNode *head);

  private:
    LinkList linklist_;
	  
};

#endif
