#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
int main(void)
{
    int choice;
    printf("Press 1 to insert an element\nPress 2 for delete an element\n");
    printf("Press 3 for displaying the element\nPress 4 to exit");
    while(1)
    {
        printf("\nEnter a choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enquie();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
            case 4:
                exit(0);
            default:
            printf("Wrong choice");
        }
    }
}
void enquie()
{
    int data;
    if(rear==max-1 )
    {
        printf("Queue is full");
    }
    else
    {
        int num=1;
        if(front==-1)
        {
            front=0;
        }
        printf("Enter number to insert in:");
        scanf("%d",&data);
        printf("%d is inserted",data);
        rear++;
        queue[rear]=data;

    }
}
void del()
{
    if(front==-1 ||front>rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("%d is deleted",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if(front==rear)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }

}
