
#include<stdlib.h>  
#include<stdio.h>      
#define max 5        
int front=-1,rear=-1;       
int Cqueue[max];          
void insert();
int delete();
void display();
void search();
int main()
{
    int w,no;         
    for(;;)
    {
        printf("\n:: Menu ::\n");
        printf("\n ________\n");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Search");
        printf("\n5. EXIT");
        printf("\nEnter any option : \n");
        scanf("%d",&w);
        switch(w)
        {
        case 1:
            insert();
            break;
        case 2:
            no=delete();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
        case 5:
            exit(0);
        default:
            printf("\nInvalid Option!!\n");
        }
    }
}
void insert()
{
    int no;
    if((front ==0 && rear == max-1) || front == rear+1)
    {
        printf("\nCircular Queue Is Full !\n");
        return;
    }
    printf("\nEnter a number to Insert :\n");
    scanf("%d",&no);
    if(front==-1)
        front=front+1;
    if(rear==max-1)
        rear=0;
    else rear=rear+1;
        Cqueue[rear]=no;
}
int delete()
{
    int e;
    if(front==-1)
    {
        printf("\nThe Circular Queue is Empty !!\n");
        
    }
    e=Cqueue[front];
    if(front==max-1)
        front=0;
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else front=front+1;
    printf("\n%d was deleted !\n",e);
    return e;
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\nThe Circular Queue is Empty!. Nothing To Display !!\n");
        return;
    }
    i=front;
    if(front<=rear)
    {
        printf("\n\n");
        while(i<=rear)
            printf("%d ",Cqueue[i++]);
        printf("\n");
    }
    else
    {
        printf("\n\n");
        while(i<=max-1)
           printf("%d ",Cqueue[i++]) ;
        i=0;
        while(i<=rear)
            printf("%d ",Cqueue[i++]);
        printf("\n");
    }
 }
 void search()
 {
 int item,i,c=0;
printf("Enter the element which is to be searched"); 
scanf("%d", &item); 
for(i=front;i<=rear;i++)
{
if(item==Cqueue[i])
{
printf("item found at location %d ",i+1); 
c++;
}
}
if(c==0)
printf("item not found"); 
}


output
------

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
1

Enter a number to Insert :
11

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
1

Enter a number to Insert :
22

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
3 1

Enter a number to Insert :
33

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
1

Enter a number to Insert :
44

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
3


11 22 33 44 

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
2

11 was deleted !

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
3


22 33 44 

:: Menu ::

 ________

1. Insert
2. Delete
3. Display
4. Search
5. EXIT
Enter any option : 
4
Enter the element which is to be searched44
item found at location 4 

