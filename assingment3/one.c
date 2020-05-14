#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct node
{
    char str[100];
    struct node *next;
};
void create(struct node **f)
{
        struct node *cur=(*f);
        struct node *c=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the string:\n");
        scanf("%[^\n]",c->str);
        fgetc(stdin);
        if(*f==NULL)
            {
                *f=c;
                return; 
            }
        if(strcasecmp(c->str, cur->str) < 0)
            {
                c->next = cur;
                *f=c;
                return ;
            }
        if(cur->next!=NULL && (strcasecmp(c->str,cur->next->str) > 0))
            {
                cur=cur->next;
            }
        c->next=cur->next;
        cur->next=c;         

}
void display(struct node *f1)
{
    printf("\n");
    printf("----string after sorting----\n");
    while(f1!=NULL)
    {
        printf("%s\n",f1->str);
        f1=f1->next;
    }
}
int main()
{
    struct node *f=NULL;
    char ch='y';
    while(ch=='Y' || ch=='y')
    {
         create(&f);
         printf("Do you want to continue(Y/N):");
         scanf("%c",&ch);
         fgetc(stdin);
    }
    display(f);
    return 0;
}
