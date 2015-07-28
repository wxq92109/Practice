#include<iostream>
#include"LinkList.h"

using namespace std;

void deletDrom(LinkList*list,int min,int max)
{
	LinkList pre,link;
	pre = link = *list;
	while (link->next)
	{
		if (link->data>min&&link->data<max)
		{
			pre->next = link->next;
			free(link);
			link = pre->next;

		}
		else
		{
		    pre = link;
			link = link->next;			
		}
	}	
}

void main()
{
	LinkList L;
	int min,max;
	L = initLinkList(20);
	printLinkList(&L);
	cout<<"请输入最小值"<<endl;
	cin>>min;
	cout<<"请输入最大值"<<endl;
	cin>>max;
	deletDrom(&L,min,max);

}