#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node { 
    char data; 
    struct node* next; 
} Node, node;

void Push(struct node** headRef, int newData);

int Pop(struct node** headRef);

int Count(struct node* head, int searchFor);

int GetNth(struct node* head, int index);

void DeleteList(struct node** head);

void InsertNth(struct node** head, int index, int data);

void MoveNode(struct node** destRef, struct node** sourceRef);

void Reverse(struct node** headRef);

void printList(struct node* head);


#endif