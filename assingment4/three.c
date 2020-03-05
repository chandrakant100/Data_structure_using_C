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
void delete(struct node *f,int num)
{
    int num1;
    start:
    printf("\nEnter the positon to delete:");
    scanf("%d",&num1);
    if(num1<1 || num1+1==num || num1>=num)
        {
            printf("\n!!!!Invalid input please retry!!");
            goto start;
        }
    while(num1>1)
    {
        f=f->next;
        num1--;
    }
    struct node *cur=f->next;
    f->next=cur->next;
    cur->next->prev=f;
    free(cur);
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
    delete(f,num);
    printf("\n-----The Data after deletion-----\n");
    display(f);
    return 0;  
}