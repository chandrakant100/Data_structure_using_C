#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

void create(node **f,int num)
{
    int i;
    node *l;
    for(i=0;i<num;i++)
    {
    node *c=(struct node *)malloc(sizeof(struct node));
    c->next=NULL;
    printf("\nEnter the data %d: ",i+1);

    scanf("%d",&c->data);
    if(*f==NULL)
        *f=c;
    else
        l->next=c;
        l=c;
    } 

}
node* even(node *f)
{
    node *f1=f,*f2=NULL,*l;
    while(f1!=NULL)
    {
        if(f1->data % 2==0 )
        {
            node *c=(node *)malloc(sizeof(node));
            c->data=f1->data;
            c->next=NULL;
            if(f2==NULL)
                    f2=c;
             else
                    l->next=c;
            l=c;
        }
        f1=f1->next;
    }
    return f2;
}
node* odd(node *f)
{
    node *f1=f,*f2=NULL,*l;
    while(f1!=NULL)
    {
        if(f1->data % 2!=0 )
        {
            node *c=(node *)malloc(sizeof(node));
            c->data=f1->data;
            c->next=NULL;
            if(f2==NULL)
                    f2=c;
             else
                    l->next=c;
            l=c;
        }
        f1=f1->next;
    }
    return f2;    
}
void display(struct node *pt)
{
    while(pt!=NULL)
        {
            printf("\nThe data are:%d",pt->data);
            pt=pt->next;
        }
}
int main()
{
    node *f=NULL,*f2,*f3;
    int num;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(&f,num);
    display(f);
    
    f2=even(f);
    f3=odd(f);

    printf("\nThe Even list is:\n");
    while(f2!=NULL)
    {
        printf("%d ",f2->data);
        f2=f2->next;
    }
    printf("\nThe odd list is:\n");
    while(f3!=NULL)
    {
        printf("%d ",f3->data);
        f3=f3->next;
    }

    return 0;  
}