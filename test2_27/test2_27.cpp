#include<iostream>
#include"SqList.h"

using namespace std;

void SqList_Intersect_True(Sqlist &A,Sqlist B)//��Ԫ�ص������е����Ա�A��B��Ԫ�صĽ��������A��
{
  int i,j,k;
  i=1;j=1;k=0;
  while(A.elem[i]&&B.elem[j])
  {
    if(A.elem[i]<B.elem[j]) i++;
    else if(A.elem[i]>B.elem[j]) j++;
    else if(A.elem[i]!=A.elem[k])
    {
      A.elem[++k]=A.elem[i]; //��������һ����A,B�ж����ڵ�Ԫ��
      i++;j++; //��C��û��,����ӵ�C��
    }
  }//while
  while(A.elem[k]) A.elem[k++]=0;
}




void main()
{
	Sqlist A,B;
	Sqlist L;
	int j,e;
	printf("�붨�����Ԫ�أ�");
	Initlist(A);
	Initlist(B);
	Creatlist(A);
	Creatlist(B);
	SqList_Intersect_True(A,B);

}