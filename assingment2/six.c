#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data,row,col;
    struct node *next;
};
void create(struct node **f,int row,int col)
{
    struct node *l;
    int i=1;
    struct node *c=(struct node *)malloc(sizeof(struct node));
    c->next=NULL;
    c->row=row;
    c->col=col;
    scanf("%d",&c->data);
    if(*f==NULL)
        *f=c;
    else
        l->next=c;
        l=c;
    } 
void display(struct node *pt,int row,int col)
{
    int i,j;
    printf("\nThe matrix is :\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
            printf("%d ",pt->data);
            pt=pt->next;
        }
        printf("\n");
    }    

}
int main()
{
    int num,i,j,row,col;
    struct node *f=NULL,*c;

    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("\nEnter no. of columns:");
    scanf("%d",&col);

    printf("\nEnter the Data of the matrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            {
                create(&f,i,j);
            }

    display(f,row,col);
    
    return 0;  
}