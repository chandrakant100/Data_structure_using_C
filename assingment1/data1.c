#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create(struct node **f,int num)
{
    int i;
    struct node *l;
    for(i=0;i<num;i++)
    {
    struct node *c=(struct node *)malloc(sizeof(struct node));
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
    struct node *f=NULL;
    int num;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(&f,num);
    display(f);
    
    return 0;  
}