#include<stdio.h>
#include<stdlib.h>
typedef struct Stack
{
    int ar[10];
    int top;
}stack;
int isfull(stack *st)
{
    if(st->top== -1)
            return 1;
    else    
        return 2;        
}
int isempty(stack *st)
{
    if(st->top== -1)
    {
        printf("\nThe stack is full!!!");
        return 0;
    }    
    else 
        return 1;     
}
void push(stack *st)
{
    if(st->top<10)
    {
        st->top++;
    printf("\nEnter the data:");
    scanf("%d",&st->ar[st->top]);
    }
    else
        printf("\nThe stack is full"); 
}
void pop(stack *st)
{
    st->top--;
}
void display(stack st)
{
    printf("\n%d",st.ar[st.top]);
}
int main()
{
    stack st;
    st.top=-1;
    char ch='y';
    int num;
    while(ch=='Y' || ch=='y')
    {
        printf("------ENTER THE NUMBERS TO PERFORM THE FOLLOWING OPERATIONS------\n");
        printf("1:push\n2:pop\n");
        scanf("%d",&num);   
    switch(num)
    {
        case 1:
                if(isfull(&st))
                        push(&st);
                break;
        case 2:
                if(isfull)
                break;
        default: 
                printf("\nError");       
    }
    printf("\nwant to do more operations?(y/n):");
    fgetc(stdin);
    scanf("%c",&ch);
    }
    display(st); 
    return 0;
}
