#include<iostream>

using namespace std;
typedef int ElemType;
typedef    int    Status;
#define   OK                 1
#define   ERROR                0
#define   OVERFLOW          -2
#define  LIST_INIT_SIZE     100
#define  LISTINCREMENT    10	
typedef  struct
{
    ElemType  *elem;
    int  length;
    int  listsize;
} SqList;
//������˳���
Status InitList_Sq( SqList &L )
{
    L.elem = (ElemType*) malloc (LIST_INIT_SIZE*sizeof(ElemType));
    if (!L.elem)
        exit(OVERFLOW);
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}
int Insert_SqList(SqList &L,int x)//��x������������va��
{
  int i;
  if(L.length+1>L.listsize)
	  return ERROR;
  L.length++;
  for(i=L.length-1;L.elem[i]>x&&i>=0;i--)
    L.elem[i+1]=L.elem[i];
  L.elem[i+1]=x;
  return OK;
}//Insert_SqList 

//˳��������ʾ
Status ListPrint(SqList L)
{
    int i=0;
    if(!L.elem)
        return ERROR;
	cout<<"�������ݣ�";
    while(i<L.length)
        cout<<L.elem[++i]<<" ";
    printf("\n");
    return OK;
}
int main()
{
	SqList L;
    //char flag;
   // int i;
    ElemType e;
    if(InitList_Sq(L)==OK)
    {
        cout<<"������˳���ɹ���\n";
		cout<<"��������Ҫ��������ݣ�"<<endl;
		cin>>e;
		Insert_SqList(L,e);
	}
	ListPrint(L);
	return 0;
}