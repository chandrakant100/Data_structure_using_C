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
    int i=1;
    char ch='Y';
     node *l;
    while(ch=='Y' || ch=='y')
    {
        node *c=(node *)malloc(sizeof(node));

        c->next=NULL;
        printf("Enter the string %d:",i);
        fgetc(stdin);
        scanf("%[^\n]",c->str);

        if(*f==NULL)
            *f=c;
        else
            l->next=c;
            l=c;
        printf("\nDo you want to continue:(y\n):");
        fgetc(stdin);
        scanf("%c",&ch);    
        i++;
    }
}
void sort(node *f)
{   
    char str2[20];
    memset(str2,'\0',sizeof(str2));
    node *f1=f,*f2=f;
    while(f1->next!=NULL)
    {
    while(f2->next!=NULL)
    {
        if(f1!=f2)
            if(f2->str[0] < f1->str[0])
                {
                    strcpy(str2,f2->str);
                     strcpy(f2->str,f1->str);
                    strcpy(f1->str,str2);
                }
                f2=f2->next;
    }
        f1=f1->next;
        f2=f;
    }
    display(f);
}
void display(node *f)
{
    printf("\n");
    while(f!=NULL)
    {
        printf("%s\n",f->str);
        f=f->next;
    }
}
int main()
{
    node *f=NULL;
    create(&f);
    sort(f);
    //display(f);
    return 0;
}