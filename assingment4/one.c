#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node* create(struct node **f,int num)
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

return l;
}
void display_b(struct node *pt)
{
    while(pt!=NULL)
        {
            printf("\nThe data are:%d ",pt->data);
            pt=pt->prev;
        }
}
int main()
{
    int num;
    struct node *f=NULL,*l;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    l=create(&f,num);
    printf("\n-----Displaying data from end to start-----\n");
    display_b(l);
    
    return 0;  
}