#include<stdio.h>
#include<stdlib.h>
typedef struct matrix
{
    int data;
    int row_pos;
    int col_pos;
    struct matrix *next;
}mat;
void create(mat **f,int val,int row,int col)
{
    mat *l;
    if(val!=0)
        {
            mat *node=(mat *)malloc(sizeof(mat));
            node->data=val;
            node->row_pos=row;
            node->col_pos=col;
            node->next=NULL;

            if(*f==NULL)
                *f=node;
            else
                l->next=node;
                l=node;    
        }

}
void display_matrix(int ar[][10],int r,int c)
{
    printf("\n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                printf("%d ",ar[i][j]);
            }
            printf("\n");
    }
}
void display_li(mat *f)
{
    mat *temp,*temp1,*temp2;
    temp=f;
    temp1=f;
    temp2=f;
    printf("\nDisplaying the non_zero elments:");
        while(temp)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
    printf("\nDisplaying the row_positions:");
        while(temp1)
            {
                printf("%d ",temp1->row_pos);
                temp1=temp1->next;
            }
    printf("\nDisplaying the column positions:");
        while(temp2)
            {
                printf("%d ",temp2->col_pos);
                temp2=temp2->next;
            }
}
int main()
{
    mat *f=NULL;
    int r,c,i,j;
    int ar[10][10];
    printf("Enter the row size:");
    scanf("%d",&r);
    printf("\nEnter the column size:");
    scanf("%d",&c);

    printf("\nEnter the elemets of the sparsh matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            {
                scanf("%d",&ar[i][j]);
                create(&f,ar[i][j],i,j);
            }
            
    display_matrix(ar,r,c);
    display_li(f);
    return 0;
}