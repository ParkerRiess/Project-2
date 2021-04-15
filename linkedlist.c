#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void Push(node** headRef, int newData)
{
    node* newNode = (node*)malloc(sizeof(node)); 
  
    newNode->data = newData;

    newNode->next = (*headRef); 
    
    (*headRef) = newNode; 
}

int Pop(node** headRef)
{
    int popValue = (*headRef)->data;
    
    if(*headRef == NULL)
    {
        return -1;    
    }
    
    node* newHead = (*headRef)->next;
    free(*headRef);
    *headRef = newHead;
    return popValue;
}

int Count(node* head, int searchFor)
{
    node* current = head;
    int count = 0;
    
    while(current != NULL)
    {
        if(current->data == searchFor)
        {
            count ++;
        }
        current = current->next;
    }
    return count;
}

int GetNth(node* head, int index)
{
    if(index == 0){
        return head->data;
    }
    
    node* current = head;
    
    for(int i = 0; i < index; i++)
    {
        current = current->next;
    }
    return current->data;
}

void DeleteList(node** head)
{
    (*head) = NULL;
    free(*head);
}

void InsertNth(node** head, int index, int data)
{
    node* current = (*head);
    for(int i = 0; i < index; i++)
    {
        current = current->next;
    }
    current->data = data;
}

void MoveNode(node** destRef, node** sourceRef)
{
    int secondData = Pop(sourceRef);
    
    Push(destRef, secondData);
}

void Reverse(node** headRef)
{
    node* first;
    node* rest;
 
    if (*headRef == NULL) {
        return;
    }
 
    first = *headRef;  
    rest = first->next;    

    if (rest == NULL)
    {
        return;
    }
    
    Reverse(&rest);
    first->next->next = first;
    first->next = NULL;  
    *headRef = rest;
}

void printList(node* head)
{
    node* ptr = head;
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

