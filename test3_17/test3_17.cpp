#include "seqStack.h"
#include <iostream>
using namespace std;


int IsReverse()//�ж�������ַ�����'&'ǰ��'&'�󲿷��Ƿ�Ϊ�洮,���򷵻�1,���򷵻�0
{
  char e,c;
  struct SeqStack s;   
  InitStack(s);
  while((e=getchar())!='&')
    Push(s,e);
  while((e=getchar())!='@')
  {
    if(StackEmpty(s))
		return 0;
    Pop(s,c);
    if(e!=c) 
		return 0;
  }
  if(!StackEmpty(s))
	  return 0;
  return 1;
}



int main()   
{   
     int flag = -1;
    flag = IsReverse();
	if(flag==1)
		cout<<"'&'ǰ��'&'�󲿷����洮"<<endl;
	else
		cout<<"'&'ǰ��'&'�󲿷ֲ����洮"<<endl;
    return 0;   
}  