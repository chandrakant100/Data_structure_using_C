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
void prime(node *f)
{
        int num,i,temp=1;
        printf("\nThe Prime numbers in the list are:\n");
        while(f!=NULL)
        {
            num=f->data;
            for(i=2;i<=(num/2);i++)
            {
                if(num%i==0)
                {
                        temp=0;
                        break;
                }
            }            
            if(temp==1)
                printf("%d ",num);
            f=f->next;            
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
    node *f=NULL,*f2,*f3;
    int num;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(&f,num);
    display(f);
    
    prime(f);
    return 0;  
}