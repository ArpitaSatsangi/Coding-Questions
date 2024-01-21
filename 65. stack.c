#include <stdio.h>
#include <stdlib.h>
#define max 5
int top=-1;
int stack[max];

int isUnderflow()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isOverflow()
{
    if(top==max-1)
        return 1;
    else
        return 0;
}

void push(int x)
{
    if(isOverflow())
    {
        printf("Stack is full.\n");

    }
    else
    {
        stack[++top]=x;
    }
}

void pop()
{
    if(isUnderflow())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        int x=stack[top--];

        printf("%d is popped.\n", x);

    }
}

void topElement()
{
    if(isUnderflow())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("top element is  %d.\n", stack[top]);

    }
}

void display()
{
    if(isUnderflow())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        int i;
        for(i=top;i>=0;i--)
        {
            printf("%d  ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{

    while(1)
    {
        int ch, ele;
        printf("~~STACK~~\n");
        printf("1.push 2.pop 3.top 4.display 5.exit\n");
        printf("Enter choice:  ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            if(isOverflow())
            {
                printf("Stack is Full\n");
            }
            else
            {
               printf("Enter Element : ");
               scanf("%d",&ele);

               push(ele);

               printf("%d Element successfully pushed\n",ele);
            }
            break;

        case 2:
            pop();
            break;
        case 3:
            topElement();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
