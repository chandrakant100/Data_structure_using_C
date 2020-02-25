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
    printf("\nEnter the data:");

    scanf("%d",&c->data);
    if(*f==NULL)
        *f=c;
    else
        l->next=c;
        l=c;
    } 

}
void copy_list(struct node *f)
{
    struct node *f1=NULL,*l,*f2=f;
    while(f2!=NULL)
    {
        struct node *c=(struct node *)malloc(sizeof(struct node));
        c->next=NULL;
        c->data=f->data;
        if(f1!=NULL)
            f1=c;
        else
            l->next=c;
            l=c;
        f2=f2->next;    
    }
    display(f);   
}
void display(struct node *pt)
{
    struct node *pt1=pt;
    while(pt1!=NULL)
        {
            printf("\nThe data are:%d",pt1->data);
            pt1=pt1->next;
        }
}
int main()
{
    int num;
    struct node *f=NULL,*f1;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(num,&f);
    display(f);
    printf("\nThe copied data in another list are:\n");
    copy_list(f);
    return 0;  
}