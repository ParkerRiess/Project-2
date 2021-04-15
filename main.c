/******************************************************************************
* Name: Parker Riess
* Date: 4/6/21
* Assignment: Project 2 
* ******************************************************************************
* Program that implements and manipulates linked list.
* ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"




int main()
{
    struct node *n = (struct node*)malloc(sizeof(struct node)); 
    
    // Push: push value of 8
    printf("Push Test: \n");
    Push(&n, 8);
    printf("Pushed Item: %d \n", n->data);
    printf("\n");
    
    // Pop test: push 10 and pop out 10 and 8
    printf("Pop Test: \n");
    Push(&n, 10);
    printf("Poped Item: %d \n", Pop(&n));
    printf("Poped Item: %d \n", Pop(&n));
    printf("\n");
    
    //Count Test: push 4 in 3 times and search for 4
    printf("Count Test: \n");
    Push(&n, 4);
    Push(&n, 1);
    Push(&n, 3);
    Push(&n, 4);
    Push(&n, 11);
    Push(&n, 4);
    printf("Count of four: %d \n", Count(n,4));
    printf("\n");
    
    //GetNth Test: Look for the value at index 4 of the list {4, 11, 4, 3, 1, 4}, which is 1
    printf("GetNth Test: \n");
    printf("Item at Index 4: %d \n", GetNth(n,4));
    printf("\n");
    
    //DeleteList Test: 
    printf("DeleteList Test: \n");
    DeleteList(n);
    printf("\n");
    
    //InsertNth Test: Insert 0 into index 3, print out item at index 3
    printf("InsertNth Test: \n");
    Push(&n, 5);
    Push(&n, 4);
    Push(&n, 3);
    Push(&n, 2);
    Push(&n, 1);
    Push(&n, 0);
    InsertNth(&n, 3, 0);
    printf("Item at Index 3: %d \n", GetNth(n,3));
    printf("\n");
    
    //MoveNode Test: Creates new list {8, 9}, Moves 8 to origional list
    printf("MoveNode Test: \n");
    struct node *s = (struct node*)malloc(sizeof(struct node));
    Push(&s, 9);
    Push(&s, 8);
    MoveNode(&n, &s);
    printf("Item at Index 0: %d \n", GetNth(n,0));
    printf("\n");
    
    //Reverse Test:
    printf("Reverse Test: \n");
    struct node *z = (struct node*)malloc(sizeof(struct node));
    Push(&z, 1);
    Push(&z, 2);
    Push(&z, 3);
    //printf("Item at Index 1: %d \n", GetNth(z,1));
     printList(z);
    printf("Reverse: \n");
    Reverse(&z);
    printList(z);
    //printf("Item at Index 1: %d \n", GetNth(z,1));
    
}
