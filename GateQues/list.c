#include<stdio.h>
#include<conio.h>

void main()
{
    struct node
    {
        char data;
        struct node* link;
    };
    struct node* new1=(struct node*)malloc(sizeof(struct node));
    struct node* new2=(struct node*)malloc(sizeof(struct node));
    struct node* new3=(struct node*)malloc(sizeof(struct node));
    struct node* new4=(struct node*)malloc(sizeof(struct node));
    struct node* new5=(struct node*)malloc(sizeof(struct node));
    struct node* new6=(struct node*)malloc(sizeof(struct node));
    struct node* new7=(struct node*)malloc(sizeof(struct node));
    struct node* head=&new1;
    new1->data='a';
    new1->link=&new2;
    new2->data='b';
    new2->link=&new3;
    new3->data='c';
    new3->link=&new4;
    new4->data='d';
    new4->link=&new5;
    new5->data='e';
    new5->link=&new6;
    new6->data='f';
    new6->link=&new7;
    new7->data='g';
    new7->link='\0';
    while(head)
    {
        printf("%c",head->data);
        head=head->link;
    }
}
