#include<stdio.h>
#include<malloc.h>
typedef int Elemtype;
typedef int Status;
#define OK 1
#define OVERFLOW -1 
#define ERROR 2
typedef struct
{
    Elemtype *base[2];
    Elemtype *top[2];
 }BDStacktype; //˫��ջ���� 
Status Init_Stack(BDStacktype &tws,int m)//��ʼ��һ����СΪm��˫��ջtws
{
  tws.base[0]=(Elemtype*)malloc(sizeof(Elemtype));
  tws.base[1]=tws.base[0]+m;
  tws.top[0]=tws.base[0];
  tws.top[1]=tws.base[1];
  return OK;
}//Init_Stack 
Status push(BDStacktype &tws,int i,Elemtype x)//x��ջ,i=0��ʾ�Ͷ�ջ,i=1��ʾ�߶�ջ
{
  if(tws.top[0]>tws.top[1]) 
	  return OVERFLOW; //ע���ʱ��ջ������
  if(i==0) 
	  *tws.top[0]++=x;
  else if(i==1)
	  *tws.top[1]--=x;
  else 
	  return ERROR;
  return OK;
}//push 
Status pop(BDStacktype &tws,int i,Elemtype x)//x��ջ,i=0��ʾ�Ͷ�ջ,i=1��ʾ�߶�ջ
{
  if(i==0)
  {
    if(tws.top[0]==tws.base[0]) return OVERFLOW;
    x=*--tws.top[0];
  }
  else if(i==1)
  {
    if(tws.top[1]==tws.base[1]) return OVERFLOW;
    x=*++tws.top[1];
  }
  else 
	  return ERROR;
  printf("pop data is ��%d\n\n",x);
  return OK;
}//pop 
