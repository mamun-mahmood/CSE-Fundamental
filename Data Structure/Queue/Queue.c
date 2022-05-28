#include<stdio.h>
#define max 1
void enquie();
int front=0,rear=-1;
int q[max];
int main()
{
    int choice;
        printf("Press 1 to enqueue\nPress 0 to exit the program\n");
        scanf("%d",&choice);
    while(1)
    {

        switch(choice)
       {
         case 1:
         enqueue();
         break;
         case 0:
            exit(0);
         default:
            printf("'Wrong choice'\n");

       }
    }
    return 0;


}
void enqueue()
{
    int data;
    if(rear==max-1)
    {
        printf("Queue is full");
        return 0;
    }
     else
    {
        int num=1;
        if(front==-1)
        {
            front=0;
        }
        printf("Enter number to insert in:\n");
        scanf("%d",&data);
        printf("%d is inserted\n",data);
        rear++;
        q[rear]=data;

    }
        if(q[0]==q[1])
          {
            printf("%d is dequeued\n",data);
          }


}
