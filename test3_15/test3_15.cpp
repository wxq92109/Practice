#include"stack.h"
#include<iostream>
using namespace std;

void main()
{
	BDStacktype BDstack;
	Init_Stack(BDstack,100);
	//Status push(BDStacktype &tws,int i,Elemtype x)x��ջ,i=0��ʾ�Ͷ�ջ,i=1��ʾ�߶�ջ
	push(BDstack,1,24);
	//Status pop(BDStacktype &tws,int i,Elemtype &x)//x��ջ,i=0��ʾ�Ͷ�ջ,i=1��ʾ�߶�ջ
	pop(BDstack,1,24);
}