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
struct node* insert_start(struct node *f)
{   
    struct node *c=(struct node *)malloc(sizeof(struct node ));

    printf("\n-----Insertion of node at the beginning of the link list-----");

    int num;
    printf("\nEnter the data to insert:\n");
    scanf("%d",&num);

    c->data=num;
    c->next=f;
    f=c;
    display(f);
   return f;
}
void insert_end(struct node *l,struct node *f)
{
    printf("\n-----Insertion of node at the end of the link list-----");

    struct node *c=(struct node *)malloc(sizeof(struct node));

    c->next=NULL;
    printf("\nEnter the data:");
    scanf("%d",&c->data);

    l->next=c;
    l=c;

    display(f);
}
void insert_position(struct node *f)
{
    int num,count=1;
    struct node *f1=f;
    printf("\n-----Insert node at any position-----");

    printf("\nEnter the position to insert:");
    scanf("%d",&num);

    struct node *c=(struct node *)malloc(sizeof(struct node));
    printf("\nEntre the data:");
    scanf("%d",&c->data);
    while(f1!=NULL)
    {
        if(count==num-1)
        {
            c->next=f1->next;
            f1->next=c;
            break;
        }
        count++;
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
    struct node *f=NULL,*l;

    int num,num1;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    l=create(num,&f);
    printf("Press the number to perform the cases:\n1:Insert at start\n2:Insert at end\n3:Insert at any position");
    scanf("%d",&num1);                                
    switch(num1)
    {
        case 1:
            f=insert_start(f);
            break;
         case 2:
            insert_end(l,f);
            break;
        case 3:
             insert_position(f);  
             break;
        default:
             printf("\nERROR");
    }
    return 0;  
}