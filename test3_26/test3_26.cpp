#include<iostream>
#include <math.h>
typedef int Status;
#define OK 1
#define ERROR 0
//  ���㷨������
using namespace std;

float Sqrt_recursive(float A,float p,float e)//��ƽ�����ĵݹ��㷨
{
  if(abs(p^2-A)<=e) 
	  return p;
  else 
	  return sqrt_recursive(A,(p+A/p)/2,e);
}//Sqrt_recurve 
float Sqrt_nonrecursive(float A,float p,float e)//��ƽ�����ķǵݹ��㷨
{
  while(abs(p^2-A)>=e)
    p=(p+A/p)/2;
  return p;
}


int main()
{

	float A,p,e;
	cout<<"������Aֵ"<<endl;
	cin>>A;
	cout<<"������A�Ľ���ƽ����Pֵ�� ";
	cin>>p;
	cout<<"�������������eֵ�� ";
	cin>>e;
	Sqrt_recursive(A,p,e);
	cout<<endl;

}