#include<iostream>
#include"test3_31.h"
#include"seqStack.h"
#define ERROR 0
#define OK 1
using namespace std;

int Palindrome_Test()//�б�������ַ����Ƿ��������,���򷵻�1,���򷵻�0
{
  SeqStack S;
  char a,c,b;
  circlQueue Q;
  InitStack(S);
  initQueue_C(Q);
  while((c=getchar())!='@')
  {
    Push(S,c);enterQueue_C(Q,c); //ͬʱʹ��ջ�Ͷ������ֽṹ
  }
  while(!StackEmpty(S))
  {
    Pop(S,a);
	b = outputQueue_C(Q);
    if(a!=b) return ERROR;
  }
  return OK;
}//Palindrome_Test 

void main()
{
	int flag = -1;
	flag = Palindrome_Test();

	if(flag ==  1)
		cout<<"�ǻ�������"<<endl;
	else
		cout<<"���ǻ�������"<<endl;
}