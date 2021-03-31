
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;
}*top=NULL;
typedef struct node node;
void push();
void pop();
void search();
void display();
void main()
{
 int ch;
 while(1)
 {
  printf("\n MENU");
  printf("\n 1.push \n 2.pop \n 3.search \n 4.display \n 3.exit");
  printf("\nenter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:push();
	  break;
   case 2:pop();
	  break;
   case 3:search();
	  break;
   case 4:display();
	  break;
   case 5:exit(0);
	  break;
   }
  }
}
void push()
{
 node *temp;
 int item;
 printf("\n enter the item to be pushed:");
 scanf("%d",&item);
 temp=(node *)malloc(sizeof(node));
 temp->data=item;
 temp->next=top;
 top=temp;
}
void pop()
{
 node *temp;
 if(top==NULL)
 printf("\n stack  empty");
 else
 {
  temp=top;
  printf("\n popped item is %d",temp->data);
  top=top->next;
  free(temp);
 }
}
void search()
{
 struct node *temp;
 int key,flag,i=0;
 temp=top;
 if(temp==NULL)
 {
   printf("\n empty\n");
 }
 else
 {
 printf("\nenter the element to be searched:");
 scanf("%d",&key);
 while(temp!=NULL)
 {
  if(temp->data==key)
  {
   printf("element found at location %d\n",i+1);
   flag=1;
 }
 i++;
 temp=temp->next;
 }
 if(flag==0)
 {
 printf("element not found");
}
}
}
void display()
{
 node *temp;
 temp=top;
 if(top==NULL)
 printf("\n stack i empty");
 else
 {
  while(temp!=NULL)
  {
   printf("%d\t",temp->data);
   temp=temp->next;
   }
  }
 }
 



output
--------

 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:1

 enter the item to be pushed:2

 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:1

 enter the item to be pushed:3

 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:4
3	2	
 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:3

enter the element to be searched:2
element found at location 2

 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:2

 popped item is 3
 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:4
2	
 MENU
 1.push 
 2.pop 
 3.search 
 4.display 
 5.exit
enter your choice:5


