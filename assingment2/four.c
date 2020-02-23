#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;
node* insert_set1(node **f)
{
    char ch='Y';
    node *l;
    int i=1;
    printf("---------Enter the elements in set 1:---------");

    while(ch=='Y' || ch=='y')
    {
        node *c=(node *)malloc(sizeof(node));
        c->next=NULL;

        printf("\nEnter the element %d :",i);
        scanf("%d",&c->data);

        if(*f==NULL)
                *f=c;
        else
            l->next=c;
        l=c;
        printf("Do you want to continue(y/n):");
        fflush(stdin);
        scanf("%c",&ch);
    }
   return *f; 
}
node* insert_set2(node **f)
{
    
    char ch='Y';
    node *l;
    int i=1;
    printf("\n\n---------Enter the elements in set 2:---------");

    while(ch=='Y' || ch=='y')
    {
        node *c=(node *)malloc(sizeof(node));
        c->next=NULL;

        printf("\nEnter the element %d :",i);
        scanf("%d",&c->data);

        if(*f==NULL)
                *f=c;
        else
            l->next=c;
        l=c;

        printf("Do you want to continue(y/n):");
        fflush(stdin);
        scanf("%c",&ch);
    }
   return *f;
}
node* intersection(node *f1,node *f2)
{
    node *f=NULL,*l,*f3=f2;
    while(f1!=NULL)
    {
    while(f2!=NULL)
    {   
        if(f1->data==f2->data)
                {
                    node *c=(node *)malloc(sizeof(node));
                    c->next=NULL;
                    c->data=f2->data;
                        if(f==NULL)
                            f=c;
                        else
                            l->next=c;
                            l=c;
                }
           f2=f2->next;     
    }
    f2=f3;
    f1=f1->next;
    }
    return f;
}
int main()
{
    node *f1=NULL;node *f2=NULL,*f;
    f1=insert_set1(&f1);
    f2=insert_set2(&f2);

    f=intersection(f1,f2);

    printf("\nThe insertion of two sets are:\n");
    while(f!=NULL)
    {
        printf("%d ",f->data);
        f=f->next;
    }

    return 0;
}