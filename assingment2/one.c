#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

void insert(node **f,int num)
{
    node *c=(node *)malloc(sizeof(node));
    node *l;

    c->data=num;
    if(*f==NULL)
            {
                l=c;
                *f=c;
                (*f)->next=NULL;
            }
    else 
    {
        c->next=*f;
        *f=c;
    }

}
void display(node *f)
{
    printf("\nEach indivisual digit stroed in list are:\n");
    while(f!=NULL)
    {
        printf("%d ",f->data);
        f=f->next;
    }
}

int main()
{
    int num,temp;
    node *f=NULL;
    printf("Enter a number:");
    scanf("%d",&num);

    while(num)
    {
        temp=num%10;
        insert(&f,temp);
        num=num/10;
    }
    display(f);

    return 0;
}