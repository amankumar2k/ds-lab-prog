/* 1.Design, Develop and Implement a menu driven Program in C for the following
Array operations.
a. Creating an Array of N Integer Elements.
b. Display of Array Elements with Suitable Headings.
c. Inserting an Element (ELEM) at a given valid Position (POS).
d. Deleting an Element at a given valid Position(POS).
e. Exit.   */

#include<stdio.h>
#include<stdlib.h>
int a[20],n,i,pos,val,choice;
void create();
void display();
void insert();
void delete();
void main()
{
while(1)
{
printf("....MENU...\n");
printf("1.create\n 2.display\n 3.insert\n 4.delete\n 5.exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:create();
       break;
case 2:display();
       break;
case 3:insert();
       break;
case 4:delete();
       break;
case 5:exit(0);
       break;
default:printf("invalid choice\n");
        break;
}
}
}
void create()
{
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void display()
{
printf("the elements are\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
void insert()
{
printf("enter the positon\n");
scanf("%d",&pos);
printf("enter an element\n");
scanf("%d",&val);
for(i=n-1;i>=pos;i--)
a[i+1]=a[i];
a[pos]=val;
n++;
}
void delete()
{
printf("enter the positon from which the element should be deleted\n");
scanf("%d",&pos);
val=a[pos];
for(i=pos;i<n;i++)
a[i]=a[i+1];
printf("the deleted element is %d/n",val);
n--;
}


