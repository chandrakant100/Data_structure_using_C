#include<stdio.h>
#include<stdlib.h>
typedef struct polynom1
{
    int coff;
    int expo;
    struct polynom1 *next;
}poly;
void create(poly **f)
{
    poly *cur=(*f);
    poly *node=(poly *)malloc(sizeof(poly));
    printf("\nEnter the coff:");
    scanf("%d",&node->coff);
    printf("\nEnter the exponent:");
    scanf("%d",&node->expo);
    node->next=NULL;
    if(!(*f))
    {
        *f=node;
        return;
    }
    if( node->expo > cur->expo)
        {
                node->next=cur;
                *f=node;
                return ;
        }
    while(cur->next!=NULL && node->expo < cur->next->expo)
        {
            cur=cur->next;
        }
    node->next=cur->next;
    cur->next=node;
}
void display(poly *f)
{
    printf("The polynomial is:\n");
    while(f!=NULL)
        {
            if(f->coff >0)
            printf("+%dx^%d ",f->coff,f->expo);
            else
            printf("%dx^%d",f->coff,f->expo);
            f=f->next;
        }
}
int main()
{
    poly *f=NULL;
    char ch='y';
        while(ch=='y' || ch=='Y')
        {    
            create(&f);
            printf("want to continue?(y/n):");
            fgetc(stdin);
            scanf("%c",&ch);
        }
        display(f);
return 0;
}