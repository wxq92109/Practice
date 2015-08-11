#include<iostream>
#include"LinkList.h"

using namespace std;

void LinkList_Intersect_True(LinkList &A,LinkList B)//������ṹ����������
{
  LinkList p,q,pc;	
  p=A->next;q=B->next;pc=A;
  while(p&&q)
  {
    if(p->data<q->data) p=p->next;
    else if(p->data>q->data) q=q->next;
    else if(p->data!=pc->data)
    {
      pc=pc->next;
      pc->data=p->data;
      p=p->next;q=q->next;
    }
  }//while
  cout<<"����ϲ��ɹ���"<<endl;
}


void main()
{
	LinkList A,B;
	A = initLinkList(10);
	B = initLinkList(20);
	cout<<"A:1 2 3.....10 "<<endl;
	cout<<"B:1 2 3.....20 "<<endl;
	cout<<"����ĺϲ�"<<endl;
	LinkList_Intersect_True(A,B);
}