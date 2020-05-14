#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create(int num,struct node **f)
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
void update(struct node *f)
{
    int num,num1;
    printf("\nEnter the data to update:");
    scanf("%d",&num);
    printf("\nEnter the updated data:");
    scanf("%d",&num1);
    struct node *f1=f;
    while(f1!=NULL)
    {
        if(f1->data==num)
            f1->data=num1;
            f1=f1->next;
    }
    display(f);
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
    int num;
    struct node *f=NULL;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(num,&f);
    update(f);
    
    return 0;  
}