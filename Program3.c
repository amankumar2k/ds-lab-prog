/* Design, Develop and Implement a menu driven Program in C for the
following operations on STACK of Integers,                                                                               (Array Implementation of Stack with maximum size MAX).

a. Push an Element on to Stack.
b. Pop an Element from Stack.
c. Demonstrate how Stack can be used to check Palindrome.
d. Demonstrate Overflow and Underflow situations on Stack.
e. Display the status of Stack.
f. Exit.

ALGORITHM: 
Step 1: Start.
Step 2: Initialize stack size MAX and top of stack -1.
Step 3: Push integer element on to stack and display the contents of the stack. if stack is full.
give a message as „Stack is Overflow?.
Step 4: Pop element from stack along with display the stack contents. if stack is empty give a message as „Stack is Underflow?.
Step 5: Check whether the stack contents are Palindrome or not.
Step 6: Stop. 
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack[MAX],top=-1,item;
void push();
void pop();
void palindrome();
void display();
void main()
{
int choice;
while(1)
{
printf(" \n1.push \n 2.pop \n 3.palindrome \n 4.display \n 5.exit \n");
printf("enter choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:palindrome();
       break;
case 4:display();
       break;
case 5:exit(0);
       break;
default:printf("invalid choice\n");
        break;
}
}
}
void push()
{
if(top==MAX-1)
printf("stack overflow");
else
{
printf("enter the item to be pushed\n");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
void pop()
{
if(top==-1)
printf("stack underflow");
else
{
item=stack[top];
top=top-1;
printf("deleted item is %d",item);
}
}
void display()
{
int i;
if(top==-1)
printf("stack is empty");
else
{
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}
}
void palindrome()
{
int num[10],i=0,k,flag=1;
k=top;
while(k!=-1)
num[i++]=stack[k--];
for(i=0;i<=top;i++)
{
if(num[i]==stack[i])
continue;
else
flag=0;
}
if(top==-1)
printf("stack is empty");
else 
{
if(flag)
printf("palindrome");
else
printf("not a palindrome");
}
}
