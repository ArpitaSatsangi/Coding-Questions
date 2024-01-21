#include <stdio.h>
#include <stdlib.h>
#define max 5
int front=-1;
int rear=-1;
int q[max];

int isUnderflow()
{
    if(front==-1)
        return 1;
    else
        return 0;
}

int isOverflow()
{
    if(rear==max-1)
        return 1;
    else
        return 0;
}

void push(int x)
{
    if(isOverflow())
    {
        printf("Q is full.\n");

    }
    else
    {
        if(front==-1)
            front=rear=0;
        else
            rear++;

        q[rear]=x;
    }
}

void pop()
{
    int x=q[front];
    if(front==rear)
    {
        front=rear=-1;
    }

    else
    {
        front++;
        printf("%d is popped.\n", x);

    }
}


void display()
{
    if(isUnderflow())
    {
        printf("q is empty.\n");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%d  ", q[i]);
        }
        printf("\n");
    }
}

int main()
{

    while(1)
    {
        int ch, ele;
        printf("~~Q~~\n");
        printf("1.push 2.pop 3.top 4.display 5.exit\n");
        printf("Enter choice:  ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            if(isOverflow())
            {
                printf("Q is Full\n");
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
