#include<stdio.h>
#include<stdlib.h>
typedef struct node1
{
	int data;
}node;
void main()
{
	node *f=(node *)malloc(sizeof(node));
      	 node *f1=(node *)malloc(sizeof(node));
	 node *f2=(node *)malloc(sizeof(node));
	
	 f1->data=6;
	 f2->data=10;
	 f->data=f1->data + f2->data;
	 printf("%d",f->data);


}
