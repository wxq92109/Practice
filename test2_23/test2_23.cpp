#include<iostream>
#include"LinkList.h"

using namespace std;
void merge(LinkList &A,LinkList &B,LinkList &C)//������A��B�ϲ�ΪC,A��B��Ԫ�ؼ������,��ʹ��ԭ�洢�ռ�
{
  LinkList p,q,s,t; 
  p=A->next;q=B->next;C=A;
  while(p&&q)
  {
    s=p->next;p->next=q; //��B��Ԫ�ز���
    if(s)
    {
      t=q->next;q->next=s; //��A�ǿ�,��A��Ԫ�ز���
    }
    p=s;q=t;
  }
}

void main()
{
	LinkList A,B,C;
	A = initLinkList(20);
	B = initLinkList(30);
	cout<<"A:1 2 3.....20 "<<endl;
	cout<<"B:1 2 3.....30 "<<endl;
	cout<<"����ĺϲ�"<<endl;
	merge(A,B,C);
	printLinkList(&C);
}