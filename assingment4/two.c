#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void create(struct node **f,int num)
{
    int i;
    struct node *l;
    for(i=0;i<num;i++)
    {
    struct node *c=(struct node *)malloc(sizeof(struct node));
    c->prev=NULL;
    c->next=NULL;
    printf("\nEnter the data %d: ",i+1);

    scanf("%d",&c->data);
    if(*f==NULL)
        *f=c;
    else{
        l->next=c;
        c->prev=l;
        }
        l=c;
    }
}
void insert(struct node *f,int num)
{
    int num1;
    struct node *c=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to insert at:");
    scanf("%d",&c->data);

    start:
    printf("\nEnter the positon:");
    scanf("%d",&num1);
    if(num1<1 || num1>num)
        {
            printf("\n!!!!Invalid input please retry!!!");
            goto start;
        }
   while(num1-1>1)
    {
        f=f->next;
        num1--;
    }
    c->next=f->next;
    c->prev=f;
    f->next->prev=c;
    f->next=c;    
}
void display(struct node *pt)
{
    while(pt!=NULL)
        {
            printf("\nThe data are:%d ",pt->data);
            pt=pt->next;
        }
}
int main()
{
    int num;
    struct node *f=NULL,*l;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(&f,num);
    printf("\n-----Displaying the link list-----\n");
    display(f);
    insert(f,num);
    printf("\n-----The data after insertion-----\n");
    display(f);
    return 0;  
}