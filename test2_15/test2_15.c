void ListConcat(LinkList ha,LinkList hb,LinkList &hc)//������hb����ha�����γ�����hc
{
  hc=ha;p=ha;
  while(p->next) p=p->next;
  p->next=hb;
}
