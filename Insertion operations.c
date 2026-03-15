#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *root;
void create();
void display();
void instatbeg();
void instatloc();
void instatend();
void count ();

int main() 
{
int choice=0;
while(choice!=7)
{
printf(" Press 1 to create linked list:\n Press 2 to Display: \n Press 3 to Insert at beginning \n Press 4 to Insert at location\n Press 5 to Insert at the End \n Press 6 to count \n");
scanf("%d",&choice);

switch(choice) 
{
    case 1:
    create();
    break;
    
    case 2:
    display();
    break;
    
    case 3:
    instatbeg();
    break;
    
    case 4:
    instatloc();
    break;
    
    case 5:
    instatend();
    break;
    
    case 6:
    count();
    break;
    
    case 7:
    exit(0);
    break;
    
    default :
    printf (" Invalid number " );
}
}
}

void create ()
{
struct node *temp, *p;
int value, i, n;

printf("Enter number of nodes:\n");
scanf("%d",&n);

temp=(struct node*)malloc(sizeof(struct node));
printf("Enter value of first node");
scanf("%d",&value);

temp->data=value;
temp->next=NULL;
root=temp;
p=temp;

for(i=2; i<=n; i++)
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter value of %d node",i);
scanf("%d",&value);

temp->data=value;
temp->next=NULL;
p->next=temp;
p=temp;
}
}

void display()
{
struct node *ptr;
ptr=root;

while(ptr!=NULL)
{
printf("Data part of node contains %d\n",ptr->data);
ptr=ptr->next;
}
}

void instatbeg()
{
struct node *newnode;
int value;

newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter value of new node:");
scanf("%d",&value);

newnode->data=value;
newnode->next=root;
root=newnode;
}

void instatloc()
{
struct node *newnode, *temp;
int value, count=0, i=1, loc;

temp=root;

while(temp!=NULL)
{
count=count+1;
temp=temp->next;
}

printf("Enter node number where you want to insert newnode");
scanf("%d",&loc);

if(loc>count)
printf("You cannot insert at this location:");
else
{
newnode=(struct node*)malloc(sizeof(struct node));

printf("Enter value of new node:");
scanf("%d",&value);

newnode->data=value;
temp=root;

while(i<loc)
{
temp=temp->next;
i=i+1;
}

newnode->next=temp->next;
temp->next=newnode;
}
}

void instatend()
{
struct node *ptr, *newnode, *p;
int value;

ptr=root;

while(ptr!=NULL)
{
p=ptr;
ptr=ptr->next;
}

newnode=(struct node*)malloc(sizeof(struct node));

printf("Enter value for newnode");
scanf("%d",&value);

newnode->data=value;
newnode->next=NULL;

p->next=newnode;
}

void count()
{
struct node *ptr;
int count=0;

ptr=root;

while(ptr!=NULL)
{
count=count+1;
ptr=ptr->next;
}

printf(" Total number of nodes are:%d\n", count);
}
            
    