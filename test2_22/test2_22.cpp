#include<iostream>
#include"LinkList.h"

using namespace std;

void LinkList_reverse(LinkList &L)//����ľ͵�����;Ϊ���㷨,���������2
{
	LinkList p,q,s;
  p=L->next;q=p->next;s=q->next;p->next=NULL;
  while(s->next)
  {
    q->next=p;p=q;
    q=s;s=s->next; //��L��Ԫ����������±��ͷ
  }
  q->next=p;s->next=q;L->next=s;
  	cout<<"����ľ͵����óɹ�"<<endl;
}//LinkList_reverse



void main()
{
	LinkList L;
	L = initLinkList(20);
	cout<<"2 3.....20 1"<<endl;
	cout<<"����ľ͵�����"<<endl;
	LinkList_reverse(L);
	printLinkList(&L);
}