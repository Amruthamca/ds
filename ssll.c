#include<stdio.h>
#include<stdlib.h>

struct node{
int val;
struct node *next;
};
struct node *head;

void push()
{
int data;
struct node *ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("could not insert elemnt in stack");
}
else
{
printf("enter data to be insert");
scanf("%d",&data);
if(head==NULL)
{
ptr->val=data;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=data;
ptr->next=head;
head=ptr;
}
printf("item is pushed into the stack succesfully");
}
}
void pop()
{
int items;
struct node *ptr=(struct node *)malloc(sizeof(struct node));
struct node *head;
if(head==NULL)
{
printf("overflow \n");
}
else
{
items=head->next;
ptr=head;
head=head->next;
free(ptr);
printf("item is popped");
}
}
void display()
{
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr=head;
struct node *t=ptr;
if(ptr==NULL)
{
printf("stack is empty");
}
else
{
printf("\n||||||STACK ELEMENTS ARE|||| \n");
while(ptr!=NULL){
printf("%d \t\n",t->val);
t=t->next;
}
}}
void main()
{
int ch,n,d;
do{
printf(" \n 1. PUSH OPERATION");
printf("\n 2. POP OPERATION");
printf("\n 3. DISPLAY");
printf("\n 4. EXIT \n");

printf(" \nenter your choice");
scanf(" \n %d",&ch);
switch(ch)
{
case 1: push();
        break;
case 2:printf("enter item to be popped \n");
        scanf("%d",&n);
        pop(n);
        break;
case 3:display();
        break;
case 4:

        break;
default:
        printf("invalid choice");
}
}while(ch!=4);
//getch();
}
