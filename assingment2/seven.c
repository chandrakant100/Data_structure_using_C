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
struct node* copy_list(struct node *f)
{
    struct node *f1=NULL,*l;
    while(f!=NULL)
    {
        struct node *c=(struct node *)malloc(sizeof(struct node));
        c->next=NULL;
        c->data=f->data;
        if(f1!=NULL)
            f1=c;
        else
            l->next=c;
            l=c;
        f=f->next;    
    }
    return f1;
    
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
    struct node *f=NULL,*f1;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(num,&f);
    f1=copy_list(f);
    display(f);
    printf("\nThe data in the new List are:\n");
    display(f1);
    return 0;  
}