#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct node
{
    float data;
    struct node *next;
};
void create(struct node **f)
{
        struct node *cur=(*f);
        struct node *c=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:\n");
        scanf("%f",&c->data);
        if(*f==NULL)
            {
                *f=c;
                return; 
            }
        if(c->data < cur->data)
            {
                c->next = cur;
                *f=c;
                return ;
            }
        if(cur->next!=NULL && (c->data > cur->next->data))
            {
                cur=cur->next;
            }
        c->next=cur->next;
        cur->next=c;           

}
void display(struct node *f1)
{
    printf("\n");
    printf("----Data after sorting in ascending order----\n");
    while(f1!=NULL)
    {
        printf("%.2f\n",f1->data);
        f1=f1->next;
    }
}
int main()
{
    struct node *f=NULL;
    char ch='y';
    while(ch =='Y' || ch =='y')
    {
         create(&f);
         printf("Do you want to continue(Y/N):");
         fgetc(stdin);
         scanf("%c",&ch);
            getc(stdin);
    }
    display(f);
    return 0;
}
