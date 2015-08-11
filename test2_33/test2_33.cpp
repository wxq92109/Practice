typedef struct XorNode{
	char data;
	struct XorNode* LRPtr;
}XorNode,*XorPointer;
typedef struct{
	XorPointer Left,Right;
}XorLinkedList;

void LinkList_Divide(XorLinkedList &L,XorLinkedList &A,XorLinkedList &B,XorLinkedList &C)//�ѵ�����L��Ԫ�ذ����ͷ�Ϊ����ѭ������.CiListΪ��ͷ���ĵ�ѭ����������.
{
	XorLinkedList s,p,q,r;
  s=L->next;
  A=(XorLinkedList*)malloc(sizeof(XorNode));p=A;
  B=(XorLinkedList*)malloc(sizeof(XorNode));q=B;
  C=(XorLinkedList*)malloc(sizeof(XorNode));r=C; //����ͷ���
  while(s)
  {
    if(isalphabet(s->data))
    {
      p->next=s;p=s;
    }
    else if(isdigit(s->data))
    {
      q->next=s;q=s;
    }
    else
    {
      r->next=s;r=s;
    }
  }//while
  p->next=A;q->next=B;r->next=C; //���ѭ������
}//LinkList_Divide 
