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
	int T[]={1,1,1,2,2,3,3,4,4,5};
	int p;
    for(p=u;p!=v&&p;p=T[p]);
    if(p==v) 
		return 1;
    else
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