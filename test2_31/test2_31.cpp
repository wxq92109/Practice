#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
typedef int datatype;
  typedef struct node
   { 
	datatype data;
    struct node *next;
   } *linklist;     //linklist�ṹ����������
void CreateList(linklist &L,int n)
{
	int temp,x;
	linklist q,p;
	q = p;
    scanf("%d",&temp);

	p -> data = temp;
	p->next = NULL;

for(int i=0; i<n-1;i++)
{	
	q=(linklist)malloc(sizeof(node)); //�����µĽ��
	cin>>q->data;
	q -> next = p;
	p = q;
}

}
 
void DeleteBefore(linklist &L,node *s,int m)
{
	struct node *p,*q;
	p=s;
	while(p->next->next!=s)
	p=p->next;
	q=p->next;
	p->next=s;
	if(q == L) // ���ɾ��ͷ���
		L = s;
	delete q;

}
 void print(linklist L,int n)
{
	struct node *p;
	p=L->next;

	for(int i=0;i<n;i++)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
 void main()
 {
	linklist A;
	struct node *s;
	int n;
	cout<<"��������ĳ���n"<<endl;
	cin>>n;
	cout<<"����n����"<<endl;
	CreateList(A,n);
	cout<<"����Ҫɾ���ڼ�����ǰ���"<<endl;
	int x;
	cin>>x;
	s=A->next;
	for(int i=0;i<x;i++)
	{
		s=s->next;
	}
	DeleteBefore(A,s,n);
	cout<<"�������Ԫ��..."<<endl;
	print(A,n-1);
 }