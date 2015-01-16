#include "link_list.h"

MyLinkList::MyLinkList()
{
	linklist_ = NULL;
}

MyLinkList::~MyLinkList()
{
	delete linklist_;
	linklist_ = NULL;
}

void CreateList(ElemType A[], int n)
{
	linklist_ = NULL;
	for(int i = n - 1; i--; i >= 0)
	{
		LinkList s = new Lode();
		s->data = A[i];
		s->next = linklist_;
		linklist_ = s;
	}
}

int MyLinkList::Length()
{
	int count = 0;
	return count;
	
}

LNode* MyLinkList::LocateElem(ElemType e)
{
}

void MyLinkList::InsertPoint(LNode *pSrc, LNode *pIst)
{
}

void MyLinkList::DeletePoint(LNode *pDel, ElemType &e)
{
}

void MyLinkList::InvertLinkList()
{
	LinkList p = linklist_;
	linklist_ = NULL;
	while(p)
	{
		LinkList s = p;
		p = p->next;

		s->next = linklist_; 
		linklist_ = s;
	}
}

void MyLinkList::Union(LinkList &Lsrc)
{
}
