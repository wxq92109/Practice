#include<malloc.h>
#include<iostream>
using namespace std;
#define TRUE        1  
#define FALSE       0  
#define OK          1  
#define ERROR       0  
#define OVERFLOW    -1  
#define UNDERFLOW   -2  
 
//���庯������ֵ����  
typedef int  Status;  
//����˳��ջ������Ԫ�ص�����  
typedef char  ElemType;
   
//����˳��ջ�Ĵ洢�ṹ  
#define STACK_INIT_SIZE 100 //��ʼ����ռ��С
#define INCREMENTSIZE   10 //�洢�ռ��������  
struct SeqStack{  
    ElemType    *bottom;    //ջ��ָ��  
    ElemType    *top;       //ջ��ָ��  
    int      size;       //ջ�洢�ռ��С  
};
Status  InitStack(SeqStack &s)  
//�������������һ����ջS  
{   
    s.bottom=(ElemType*)malloc(STACK_INIT_SIZE*sizeof(ElemType));  
    if(s.bottom == NULL){  
        cout<<"���ش���˳��ջ��ʼ�洢�ռ����ʧ�ܣ������˳�";  
        return ERROR;
    }   
    s.top=s.bottom;
    s.size=STACK_INIT_SIZE;   
    return OK;  
}  
 
Status  DestroyStack(SeqStack &s)  
//��ʼ������ջs�Ѵ���  
//���������ջs�ѱ�����  
{  
    free(s.bottom);   
    s.bottom=s.top=NULL;  //s.bottom��ֵΪNULL����ʾ˳��ջ������   
    s.size=0;  
    return OK;  
}  
 
Status  ClearStack(SeqStack &s)  
//��ʼ������ջs�Ѵ���  
//�����������s��Ϊ��ջ  
{   
    s.top=s.bottom;  //s.top == s.bottom��Ϊ˳��ջ�յı��  
    return OK;  
}  
 
Status  StackEmpty(SeqStack s)  
//��ʼ������ջs�Ѵ���  
//�����������ջsΪ��ջ���򷵻�TRUE������FALSE  
{  
    if(s.top == s.bottom)  
        return TRUE;  
    else 
        return FALSE;  
}  
 
Status StackLength(SeqStack s)  
//��ʼ������ջs�Ѵ���  
//�������������s��Ԫ�ظ�������ջ�ĳ���  
{  
    return s.top-s.bottom;  
}  
 
Status  Push(SeqStack &s,ElemType e)  
//��ʼ������ջs�Ѵ���  
//�������������Ԫ��e��Ϊ�µ�ջ��Ԫ��  
{       
   if(s.top-s.bottom >= s.size ){   
        s.bottom=(ElemType*)realloc(s.bottom,(s.size+INCREMENTSIZE)*sizeof(ElemType));  
        if(s.bottom == NULL){  
            cout<<"���ش���˳��ջ�����洢�ռ����ʧ�ܣ������˳���";  
            exit(OVERFLOW);  
        }    
        s.top=s.bottom+s.size;   
        s.size+=INCREMENTSIZE;  
    }   
    *s.top=e;
    s.top++;  
    return OK;  
}  
 
Status  Pop(SeqStack &s,ElemType &e)  
//��ʼ������ջs�Ѵ����ҷǿ�  
//���������ɾ��s��ջ��Ԫ�أ�������e������ֵ  
{  
    if(StackEmpty(s) == TRUE){  
        cout<<"˳��ջΪ�գ���ջʧ�ܣ�"<<endl;  
        exit(UNDERFLOW);  
    }  
    s.top--;
    e=*s.top;  
    return OK;  
}   
 
Status  GetTop(SeqStack s,ElemType &e)  
//��ʼ������ջs�Ѵ����ҷǿ�  
//�����������e����s��ջ��Ԫ��  
{  
    if( StackEmpty(s) == TRUE ){  
        cout<<"����ջ��Ԫ�ط�������ջΪ��"<<endl;  
        exit(UNDERFLOW);  
    }   
    return *(s.top-1);  
}  
 
Status  StackTraverse(SeqStack s)  
//��ʼ������ջs�Ѵ����ҷǿ�  
//�����������ջ�׿�ʼ�������
{  
    if(s.bottom == NULL){  
        cout<<"���ش���ջ�����ڣ������˳���";  
        exit(ERROR);  
    }   
    for(int i=0;i < StackLength(s);i++)   
        cout<<s.bottom[i]<<endl;    
    return OK;  
} 