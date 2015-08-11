#include "seqStack.h"
#include <iostream>
using namespace std;


void Train_arrange(char *train,SeqStack s)//�������ַ���train��ʾ��,'H'��ʾӲϯ,'S'��ʾ��ϯ
{
	char *p,*q,c,*ini;
	
  p=train;q=train;
  ini = p;
  while(*p)
  {
    if(*p=='H') 
		Push(s,*p); //��'H'����ջ��
    else 
		*(q++)=*p; //��'S'����ǰ��
    p++;
  }
  while(!StackEmpty(s))
  {
    Pop(s,c);
    *(q++)=c; //��'H'���ں�
  }
  cout<<"�Ѿ���'S'����ǰ��:"<<endl;
  while(*ini)
  {
	  cout<<*(ini++);
  }
  cout<<endl;


}


int main()   
{   
    struct SeqStack s;   
    InitStack(s);     
    ElemType train[10];   
    for(int i=0;i<10;i++){   
		if(i%2==0)
			train[i]='S';
		else 
			train[i]='H';
    }       
	Train_arrange(train,s);
    return 0;   
}  