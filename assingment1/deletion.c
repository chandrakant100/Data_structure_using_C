#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* create(int num,struct node **f )
{
    int i;
    struct node *l;
    for(i=0;i<num;i++)
    {
    struct node *m=(struct node *)malloc(sizeof(struct node));
    m->next=NULL;
    printf("\nEnter the data %d: ",i+1);

    scanf("%d",&m->data);
    if(*f==NULL)
       *f=m;
    else
        l->next=m;

        l=m;
    } 
    return l;
}
void deletion_first(struct node *f)
{
        struct node *f1=f;
        f=f->next;
        f1->next=NULL;
        free(f1);
        display(f);
}
void deletion_last(struct node *f,struct node *l)
{
    struct node *f1=f;
    while(f1->next->next!=NULL)
        f1=f1->next;
    l=f1;
    f1=f1->next;
    l->next=NULL;
    free(f1);
    display(f);

}
void deletion_pos(struct node *f)
{
    struct node *f1=f,*f2=f->next;
    int pos;
    printf("\n------deletion at any positon-----");

    printf("\nEnter the position:");
    scanf("%d",&pos);

    while((pos-1)!=1)
    {
            f1=f1->next;
            f2=f2->next;
            pos--;
    }
    f1->next=f1->next->next;
    free(f2);
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
    struct node *f=NULL,*l;

    int num,num2;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    l=create(num,&f);
    
    printf("Enter the numbers to perform the cases:\n1:To delete at the start\n2:delete at the last\n3:delete at any position\n");
    scanf("%d",&num2);
    switch(num2)
    {
        case 1:
                deletion_first(f);
                break;
        case 2:
                deletion_last(f,l);
                break;
        case 3:
                 deletion_pos(f);
                 break;
        default:
                printf("\nError");
    }
    return 0;  
}