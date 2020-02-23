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
void check(node *f)
{
    int max,min;
    max=f->data;
    min=f->data;
    while(f!=NULL)
        {
            if(max < f->data)
                    max=f->data;
            else if(min > f->data)
                    min=f->data;
            f=f->next;
        }
     printf("\nThe highest data is %d and lowest is %d ",max,min);
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
    node *f=NULL,*l;
    int num;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(&f,num);
    display(f); 
    check(f);
    return 0;  
}