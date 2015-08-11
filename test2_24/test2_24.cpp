#include<iostream>
#include"LinkList.h"

using namespace std;
void reverse_merge(LinkList &A,LinkList &B,LinkList &C)//��Ԫ�ص������е�����A��B�ϲ�ΪC,��C��Ԫ�صݼ�����,ʹ��ԭ�ռ�
{
  LinkList pa,pb,pc,pre,q;
  pa=A->next;pb=B->next;pre=NULL; //pa��pb�ֱ�ָ��A,B�ĵ�ǰԪ��
  while(pa||pb)
  {
    if(pa->data<pb->data||!pb)
    {
      pc=pa;q=pa->next;pa->next=pre;pa=q; //��A��Ԫ�ز����±�
    }
    else
    {
      pc=pb;q=pb->next;pb->next=pre;pb=q; //��B��Ԫ�ز����±�
    }
    pre=pc;
  }
  C=A;A->next=pc; //�����±�ͷ
}


void main()
{
	LinkList A,B,C;
	A = initLinkList(2);
	B = initLinkList(2);
	cout<<"A:1 2 3.....20 "<<endl;
	cout<<"B:1 2 3.....30 "<<endl;
	cout<<"����ĺϲ�"<<endl;
	reverse_merge(A,B,C);
	printLinkList(&C);
}