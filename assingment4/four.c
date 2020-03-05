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
void sort(struct node *f)
{
    struct node *f1=f,*per=f;
    int temp;
    while(f!=NULL)
    {
        while(f1!=NULL)
            {
                if(f!=f1)
                    if(f->data < f1->data)
                        {
                            temp=f1->data;
                            f1->data=f->data;
                            f->data=temp;
                        }
               f1=f1->next;
            }
        f=f->next;
        f1=per;    
    }    
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
    sort(f);
    printf("\n-----The Data after sorting in ascending order-----\n");
    display(f);
    return 0;  
}