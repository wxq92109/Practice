#include<iostream>
#include"SqList.h"

using namespace std;

void SqList_Intersect_Delete(Sqlist &A,Sqlist B,Sqlist C) 
{
	int i,j,k,m,same;
  i=0;j=0;k=0;m=0;	//iָʾA��Ԫ��ԭ����λ��,mΪ�ƶ����λ��
  while(i<A.length&&j<B.length&& k<C.length) 
  {
    if(B.elem[j]<C.elem[k]) j++;
    else if(B.elem[j]>C.elem[k]) k++;
    else
    {
      same=B.elem[j];			//�ҵ�����ͬԪ��same
      while(B.elem[j]==same) j++;
      while(C.elem[k]==same) k++;	//j,k���Ƶ��µ�Ԫ��
      while(i<A.length&&A.elem[i]<same) 
        A.elem[m++]=A.elem[i++];		//�豣����Ԫ���ƶ�����λ��
      while(i<A.length&&A.elem[i]==same) i++;	//������ͬ��Ԫ��
    }
  }//while
  while(i<A.length) 
    A.elem[m++]=A.elem[i++];	//A��ʣ��Ԫ�����´洢��
  A.length=m; 
}





void main()
{
	Sqlist A,B,C;
	Sqlist L;
	int j,e;
	printf("�붨��A����Ԫ�أ�");
	Initlist(A);
	Creatlist(A);
	printf("�붨��B����Ԫ�أ�");
	Initlist(B);
	Creatlist(B);
	SqList_Intersect_Delete(A,B,C);

}