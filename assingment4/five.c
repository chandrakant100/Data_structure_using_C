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
    c->next=NULL;
    c->prev=NULL;
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
struct node* even(struct node *f)
{
    struct node *f1=NULL,*l;
    while(f!=NULL)
        {
            if(f->data%2==0)
                {
                    struct node *c=(struct node *)malloc(sizeof(struct node));
                    c->data=f->data;
                    c->prev=NULL;
                    c->next=NULL;
                    if(f1==NULL)
                        f1=c;
                    else{
                            l->next=c;
                            c->prev=l;
                        }
                        l=c;
                }
             f=f->next;   
        }
    return f1;
}
struct node* odd(struct node *f)
{
    struct node *f1=NULL,*l;
    while(f!=NULL)
        {
            if(f->data%2!=0)
                {
                    struct node *c=(struct node *)malloc(sizeof(struct node));
                    c->data=f->data;
                    c->next=NULL;
                    c->prev=NULL;
                    if(f1==NULL)
                        f1=c;
                    else{
                            l->next=c;
                            c->prev=l;
                        }
                        l=c;
                }
            f=f->next;    
        }
    return f1;
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
    struct node *f=NULL,*l,*f1,*f2;
    printf("Enter the number of inputs:");
    scanf("%d",&num);
    create(&f,num);
    printf("\n-----Displaying the link list-----\n");
    display(f);

    f1=even(f);
    f2=odd(f);
     printf("\n-----The Even linked list-----\n");
     display(f1);
         
    printf("\n-----The Odd linked list-----\n");
    display(f2);

    return 0;  
}