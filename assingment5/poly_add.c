#include<stdio.h>
#include<stdlib.h>
int p=1;
typedef struct polynom1
{
    int coff;
    int expo;
    struct polynom1 *next;
}poly;
void create1(poly **f)
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
poly* add(poly *f1,poly *f2,poly **node)
{
    poly *f3=NULL,*l;
    while(f1!=NULL || f2!=NULL)
    { 
        if(f1==NULL)
            {
                while(f2!=NULL)
                    {
                         poly *nod=(poly *)malloc(sizeof(poly));
                         nod->next=NULL;
                         nod->coff=f2->coff;
                         nod->expo=f1->expo;
                         if(f3==NULL)
                        f3=nod;
                    else
                    l->next=nod;
                     l=nod;
                     f2=f2->next;        
                     }
                  break;   
            }  
        else if(f2==NULL)
            {
                while(f1!=NULL)
                    {
                         poly *nod=(poly *)malloc(sizeof(poly));
                         nod->next=NULL;
                         nod->coff=f1->coff;
                         nod->expo=f1->expo;
                         if(f3==NULL)
                            f3=nod;
                        else
                        l->next=nod;
                        l=nod;
                        f1=f1->next;        
                     }
                  break;   
            }
        else if(f1->expo > f2->expo)
            {
                *node=(poly *)malloc(sizeof(poly));
                (*node)->next=NULL;
                (*node)->coff=f1->coff;
                (*node)->expo=f1->expo;
                f1=f1->next;
            }
        else if(f1->expo < f2->expo)
            {
                *node=(poly *)malloc(sizeof(poly));
                (*node)->next=NULL;
                (*node)->coff=f2->coff;
                (*node)->expo=f2->expo;
                f2=f2->next;
            }
        else if(f1->expo == f2->expo)
            {
                *node=(poly *)malloc(sizeof(poly));
                (*node)->next=NULL;
                (*node)->coff=f1->coff+f2->coff;
                (*node)->expo=f1->expo;
                f1=f1->next;
                f2=f2->next;           
            }
                  
        if(f3==NULL)
            f3=(*node);
        else
            l->next=(*node);
            l=(*node);        
    } 
   return f3;             
}
void display(poly *f)
{
    printf("\n:The %d polynomial is:\n",p++);
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
    poly *f=NULL,*f1=NULL,*f3,*node;
    char ch='y';
    printf("---Enter the first polynomial data---\n");
        while(ch=='y' || ch=='Y')
        {    
            create(&f);
            printf("want to continue?(y/n):");
            fgetc(stdin);
            scanf("%c",&ch);
        }
        ch='y';
    printf("\n---Enter the second polynomial data---\n");
        while(ch=='y' || ch=='Y')
        {    
            create(&f1);
            printf("want to continue?(y/n):");
            fgetc(stdin);
            scanf("%c",&ch);
        }    
        display(f);
        display(f1);
        f3=add(f,f1,&node);
        printf("\nThe sum of the polynomial is:\n");
       display(f3);
return 0;
}