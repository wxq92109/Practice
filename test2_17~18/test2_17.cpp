#include<iostream>
#include "test2_17.h"

using namespace std;


void main()
{
	 int i;
    ElemType item;
    LinkList mainList;
    LNode    currentNode;

    // ��ʼ������ initLinkList(0) ��������һ���յ�����
    mainList    = initLinkList(3);
    currentNode = mainList;
    printf("the current linklist:\n");
    printLinkList(&currentNode);
   
    currentNode = mainList;
    // �������в���ܶ����� 0ֹͣ
	cout<<"�������в���ܶ����� 0ֹͣ:"<<endl;
    scanf("%d",&item);
    while(item) {
        insertLinkListNode(&mainList,currentNode,item);
        currentNode = currentNode->next;
        scanf("%d",&item);
    }
	printLinkList(&mainList);
	
	insertNode_i(&mainList,3,88);
	printLinkList(&mainList);

	deleteNode_i(&mainList,1);
	printLinkList(&mainList);
}

