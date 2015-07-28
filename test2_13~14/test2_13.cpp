#include "stdio.h"
#include "stdlib.h"
#include "LinkList.h"


int
main() {
    int i;
    ElemType item;
    LinkList mainList;
    LNode    currentNode;

    // ��ʼ������ initLinkList(0) ��������һ���յ�����
    mainList    = initLinkList(2);
    currentNode = mainList;
    printf("the current linklist:\n");
    printLinkList(&currentNode);
   
    currentNode = mainList;
    // �������в���ܶ����� 0ֹͣ
    scanf("%d",&item);
    while(item) {
        insertLinkListNode(&mainList,currentNode,item);
        currentNode = currentNode->next;
        scanf("%d",&item);
    }
    currentNode = mainList;

    printf("After insert the current linklist:\n");
    printLinkList(&currentNode);

    // ɾ��
    currentNode = mainList;
    printf("delete the third item\n");
    for(i = 0;i < 2; i++) {
        currentNode = currentNode->next;
    }
    printf("%d\n",currentNode->data);
    deleteLinkListNode(&mainList,currentNode);
    currentNode = mainList;
    printLinkList(&currentNode);

    // ��������
    destroyLinkList(&mainList);

    exit(0);
}