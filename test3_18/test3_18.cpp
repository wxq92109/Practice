#include "seqStack.h"
#include <iostream>
using namespace std;




Status Bracket_Test(char *str)//�б���ʽ��С�����Ƿ�ƥ��
{
  int count=0;
  char*p;
  for(p=str;*p;p++)
  {
    if(*p=='(') count++;
    else if(*p==')') count--;
    if (count<0) return 0;
  }
  if(count) 
	  return 0; //ע�����Ų�ƥ����������
  return 1;
}//Bracket_Test 

int main()   
{  
	char str[100];
	int flag;
	cout<<"������һ���ַ���"<<endl;
    scanf("%s",str);
	flag = Bracket_Test(str);
	if(flag == 1)
		cout<<"ƥ��ɹ�"<<endl;
	else 
		cout<<"ƥ��ʧ�ܣ�"<<endl;
    return 0;   
}  