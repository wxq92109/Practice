#include<iostream>
#include"SqList.h"

using namespace std;

void SqList_Intersect(Sqlist A,Sqlist B,Sqlist &C)//��Ԫ�ص������е����Ա�A��B��Ԫ�صĽ���������C��
{
  int i,j,k;
  i=1;j=1;k=0;
  while(A.elem[i]&&B.elem[j])
  {
    if(A.elem[i]<B.elem[j]) i++;
    if(A.elem[i]>B.elem[j]) j++;
    if(A.elem[i]==B.elem[j])
    {
      C.elem[++k]=A.elem[i]; //��������һ����A,B�ж����ڵ�Ԫ��,
      i++;j++; //����ӵ�C��
    }
  }//while
}



void main()
{
	Sqlist A,B,C;
	Sqlist L;
	int j,e;
	printf("�붨�����Ԫ�أ�");
	Initlist(A);
	Initlist(B);
	Creatlist(A);
	Creatlist(B);
	SqList_Intersect(A,B,C);

}