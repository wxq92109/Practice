#include<iostream>

using namespace std;

int Is_Descendant_C(int u,int v)//�ں��Ӵ洢�ṹ���ж�u�Ƿ�v������,���򷵻�1,���򷵻�0
{
/*
	          1
		2          3
	4     5    6       7
  8   9 10
	
*/
	int L[]={1,1,1,1,1,0,0,0,0,0};
	int R[]={1,1,1,1,0,0,0,0,0,0};
  if(u==v) return 1;
  else
  {
    if(L[v])
      if (Is_Descendant_C(u,L[v])) return 1;
    if(R[v])
      if (Is_Descendant_C(u,R[v])) return 1; //���Ǹ��ݹ��㷨
  }
  return 0;
}

void main()
{

	int u,v,flag;
	cout<<"��ֱ�����U��Vֵ "<<endl;
	cin>>u;
	cin>>v;
	flag = Is_Descendant_C(u,v);
	if(flag==1)
		cout<<"u��v������"<<endl;
	else
		cout<<"u����v������"<<endl;
}