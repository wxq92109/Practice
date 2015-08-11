#include "seqStack.h"
#include <iostream>
using namespace std;


Status AllBrackets_Test(char *str)//�б���ʽ�����������Ƿ�ƥ��
{
  struct SeqStack s; 
  char*p,c;
  InitStack(s);
  for(p=str;*p;p++)
  {
    if(*p=='('||*p=='['||*p=='{') Push(s,*p);
    else if(*p==')'||*p==']'||*p=='}')
    {
      if(StackEmpty(s)) return 0;
      Pop(s,c);
      if(*p==')'&&c!='(') return 0;
      if(*p==']'&&c!='[') return 0;
      if(*p=='}'&&c!='{') return 0; //�����뵱ǰջ������ƥ��
    }
  }//for
  if(!StackEmpty(s)) return 0;
  return 1;
}


int main()   
{  
	char str[100];
	int flag;
	cout<<"������һ���ַ���"<<endl;
    scanf("%s",str);
	
	flag = AllBrackets_Test(str);
	if(flag == 1)
		cout<<"ƥ��ɹ�"<<endl;
	else 
		cout<<"ƥ��ʧ�ܣ�"<<endl;
    return 0;   
}  