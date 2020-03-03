#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node_create
{
    char str[100];
    struct node *next;
}node;

void create(node **f)
{
        node *cur=(*f);
        node *c=(node *)malloc(sizeof(node));
        printf("\nEnter the string");
        fgetc(stdin);
        scanf("%[^\n]",c->str);
        if(*f==NULL)
            {
                *f=c;
                return; 
            }
        if(strcmp(c->str, cur->str) < 0)
            {
                c->next = cur;
                *f=c;
                return ;
            }
        if(cur->next!=NULL && (strcmp(c->str,cur->next->str) > 0))
            {
                cur=cur->next;
            }
        c->next=cur->next;
        cur->next=c;            

}
void display(node *f1)
{
    printf("\n");
    while(f1!=NULL)
    {
        printf("%s\n",f1->str);
        f1=f1->next;
    }
}
int main()
{
    node *f=NULL;
    char ch='y';
    while(ch=='Y' || ch=='y')
    {
         create(&f);
         printf("Do you want to continue(Y/N):");
         fgetc(stdin);
         scanf("%c",&ch);
    }
    display(f);
    return 0;
}