#include<iostream>

using namespace std;

void sort(int data[])//���Ӵ�С˳�����������
{
  data[0] = data[1];
  int temp;
  for (int i = 1; i < 3;i++)
  {
	  if (data[i] <data[i+1])
	  {
		temp = data[i];
		data[i] = data[i+1];
		data[i+1] = temp;
	  }
  }
  if(data[1]<data[2])
  {
	  temp = data[1];
	  data[1] = data[2];
	  data[2] = temp;
  }
  printf("%d %d %d\n",data[1],data[2],data[3]);
} 


 void main()
{

	int data[4];
	cout<<"�����������������֣�"<<endl;
	for (int i = 0;i < 3;i++)
	{
		scanf("%d",&data[i+1]);
	}

	sort(data);
		
}
