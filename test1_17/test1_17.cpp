#include<iostream>

using namespace std;

 int ferb(int k,int m,int f)//��k��쳲��������еĵ�m���ֵf
{
  int temp[100],i,sum,j;
  if(k<2||m<0) 
	  return 0;
  if(m<k-1) f=0;
  else if (m==k-1) f=1;
  else
  {
    for(i=0;i<=k-2;i++) 
		temp[i]=0;
    temp[k-1]=1; //��ʼ��
    for(i=k;i<=m;i++) //������е�k����m��Ԫ�ص�ֵ
    {
      sum=0;
      for(j=i-k;j<i;j++) 
		  sum+=temp[j];
      temp[i]=sum;
    }
    f=temp[m];
  }
  cout<<"k��쳲��������еĵ�m���ֵf�ǣ�"<<f<<endl;
  return 1;
}


void main()
{

	int k,m,f;
	cout<<"���������Kֵ��"<<endl;
	cin>>k;
	cout<<"������ڼ���mֵ��"<<endl;
	cin>>m;
	ferb(k,m,f);
	
}