#include<iostream>
#include"LinkList.h"

using namespace std;

void deletDrom(LinkList*list,int min,int max)
{
	LinkList pre,link,ini;
	ini = pre = link = *list;
	while (link->next)
	{
		if (link->data>min&&link->data<max)
		{
			pre->next = link->next;//ɾ��Ԫ��
			link = pre->next;

		}
		else
		{
		    pre = link;
			link = link->next;			
		}
	}
	*list = ini;
}

//ɾ��Ԫ�ص������е�����L������ֵ��ͬ��Ԫ��
void Delete_Equal(LinkList &L)
{
  LinkList p,q;
  p=L->next;q=p->next; //p,qָ��������Ԫ��
  while(p->next)
  {
    if(p->data!=q->data)
    {
      p=p->next;q=p->next; //��������Ԫ�ز����ʱ,p,q�������һ��
    }
    else
    {
      while(q->data==p->data) 
   {
     free(q);
     q=q->next; 
   }
      p->next=q;p=q;q=p->next; //������Ԫ�����ʱɾ������Ԫ��
    }//else
  }//while
  cout<<"�Զ�ɾ���������ظ�Ԫ�سɹ�"<<endl;
}//Delete_Equal 

void main()
{
	LinkList L;
	int min,max;
	L = initLinkList(20);
	//printLinkList(&L);
	cout<<"��������Сֵ"<<endl;
	cin>>min;
	cout<<"���������ֵ"<<endl;
	cin>>max;

	deletDrom(&L,min,max);	
	cout<<"�Զ�ɾ���������ظ�Ԫ��"<<endl;
	Delete_Equal(L);
}