int LinkList_Divide(LinkList &L,CiList &A,CiList &B,CiList &C)//�ѵ�����L��Ԫ�ذ����ͷ�Ϊ����ѭ������.CiListΪ��ͷ���ĵ�ѭ����������.
{
  s=L->next;
  A=(CiList*)malloc(sizeof(CiLNode));p=A;
  B=(CiList*)malloc(sizeof(CiLNode));q=B;
  C=(CiList*)malloc(sizeof(CiLNode));r=C; //����ͷ���
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
}
