#include<iostream>
typedef int Status;
#define OK 1
#define ERROR 0

using namespace std;

Status F_recursive(int n,int &s)//�ݹ��㷨
{
  if(n<0) return ERROR;
  if(n==0) s=n+1;
  else
  {
    F_recursive(n/2,s);
    s=n*s;
	cout<<s<<" ";
  }
  return OK;
}//F_recursive 
 

int main()
{

	int n,s;
	cout<<"������nֵ"<<endl;
	cin>>n;
	cout<<"S�ĵݹ�ֵ�� ";
	F_recursive(n,s);
	cout<<endl;

}