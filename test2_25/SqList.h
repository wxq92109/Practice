#define maxsize 100
typedef int elemtype;

typedef struct
{
	elemtype elem[maxsize];
	int length;
}Sqlist;
void Initlist(Sqlist &L)   //��ʼ����L
{
	L.length=0;
}
void Creatlist(Sqlist &L)
{
	
	int i;
	scanf("%d\n",&L.length);
	for(i=0;i<L.length;i++)
		scanf("%d",&L.elem[i]);
	for(i=0;i<L.length;i++)
		printf("%5",L.elem[i]);

}
void Insertlist(Sqlist &L,int j,int e)   //�������
{
	int i;
	for(i=L.length;i>=j-1;i--)
		L.elem[i+1]=L.elem[i];
	L.elem[j-1]=e;
	L.length=L.length+1;

}
void Deletelist(Sqlist &L,int j)  //ɾ��Ԫ��
{
	int i;
	for(i=j-1;i<L.length-1;i++)
		L.elem[i]=L.elem[i+1];
	L.length=L.length-1;
	printf("�µ����Ա�����Ϊ��");
	for(i=0;i<L.length;i++)
		printf("%3d",L.elem[i]);
printf("\n");   	
}
