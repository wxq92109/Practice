typedef int ElemType;

typedef struct node {
    ElemType data;
    struct node *next;
} *LNode, *LinkList;

// ��ʼ��һ������
LinkList
initLinkList(int n) {
    LinkList list = NULL;
    ElemType e;
    LNode p,r;

    int i;
    for(i = 1; i <= n; i++) {
        scanf("%d",&e);
        p = (LinkList) malloc(sizeof(LNode));
        p->data = e;
        p->next = NULL;
        if(!list) list = p;
        else r->next = p;
        r = p; // ��һ���ڵ�
    }

    return list; // ��������ͷָ��
}

// ��ӡ����
void
printLinkList(LinkList *L) {
    while(*L) {
        printf("%d ",(*L)->data);
        (*L) = (*L)->next;
    }
    printf("\n");
}

// �����������
void
insertLinkListNode(LinkList *list,LNode insertNode,ElemType item) {
    LinkList newNode;
    newNode = (LNode) malloc(sizeof(LNode));
    newNode->data = item;
    if(!*list) {
        *list = newNode;
        newNode->next = NULL;
    } else {
        // ��1��λ�ÿ�ʼ������? 
        newNode->next    = insertNode->next; // �����
        insertNode->next = newNode;
        // ���뵽��ʼλ�� ����һ�� �жδ��� ����������main
        //*list = newNode;
        //newNode->next = insertNode;
    }
}

// ɾ�������ָ�����
void deleteLinkListNode(LinkList *list,LNode deleteNode) {
    LNode currentNode;
    if(deleteNode == *list) { // ��һ���ڵ�
        *list = deleteNode->next;
        free(deleteNode);
    } else {
        for(currentNode = *list; currentNode->next != deleteNode; currentNode = currentNode->next);
        if(currentNode->next != NULL) { // ? 
            currentNode->next = deleteNode->next;
            free(deleteNode);
        }
    }
}

// ����һ������
void destroyLinkList(LinkList *list) {
    LNode currentNode,nextNode;
    currentNode = *list;
    while(currentNode) {
        nextNode = currentNode->next;
        free(currentNode);
        currentNode = nextNode;
    }
    *list = NULL;
}