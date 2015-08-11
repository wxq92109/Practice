#include <iostream>
using namespace std;
 
/*ѭ�����е����Ͷ���*/
const int Queue_Size=100;
 
typedef struct circlQueue
{
       char *elem;
       int rear;
       int front;
       int queueSize;
}circlQueue;
 
 
 
/*��ʼ��*/
void initQueue_C(circlQueue &Q)
{
       Q.elem=new char[Queue_Size];
       Q.front=Q.rear=0;//��βָ�����˵������Ϊ�ա�
       Q.queueSize=Queue_Size;
}
 
 
 
/*���ٶ���*/
void destroyQueue_C(circlQueue &Q)
{
       delete []Q.elem;
       Q.front=Q.rear=0;
       Q.queueSize=0;
}
 
 
 
 /*����еĳ���*/
int  lengthQueue_C(circlQueue &Q)
{
       int length;
       length=(Q.rear-Q.front+Q.queueSize)%Q.queueSize;/*һ������£�rear��front���Ϸ��������㷨������
  rear�ѵ�front���·������ѳ��ּ�����������*/
       return length;
}
 
 
/*�����*/
void enterQueue_C(circlQueue &Q,char x)
{
       if(((Q.rear+1)%Q.queueSize)==Q.front)//�ж�ջ�������
              cout<<"Queue OverFlow!";
       Q.elem[Q.rear]=x;
       Q.rear=(Q.rear+1)%Queue_Size;//βָ��Ӧ�Դ��ַ�ʽ��1���Ż�ʵ��ѭ�����С�
}
 
/*������*/
char outputQueue_C(circlQueue &Q)
{
       char e;
       if(Q.rear==Q.front)
              cout<<"Queue Empty";
       e=Q.elem[Q.front];
       Q.front=(Q.front+1)%Q.queueSize;;//ͷָ��Ӧ�Դ��ַ�ʽ��1���Ż�ʵ��ѭ�����С�
       return e;
}
 
void main()
{
       circlQueue Q;
       initQueue_C(Q);
       enterQueue_C(Q,'a');
       enterQueue_C(Q,'b');
       enterQueue_C(Q,'c');
       cout<<outputQueue_C(Q)<<endl;
       cout<<outputQueue_C(Q)<<endl;
       destroyQueue_C(Q);
}