// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    // 1. Malloc new node
    struct node *new_node = malloc(sizeof(struct node));

    // 2. Initialize values in node
    new_node->data = data;
    new_node->next = NULL;

    // 3. Return pointer to new node
    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // 1. Create new node
    struct node *new_node = create_node(data);

    // 2. Connect new node with rest of list
    new_node->next = head;

    // 3. Change head to point to new node
    // head = new_node;
    // return head;
    return new_node;
}

struct node *insert_tail(struct node *head, int data) {
    // 1. Create new node
    struct node *new_node = create_node(data);

    // Case 1: List is empty
    if (head == NULL) {
        return new_node;
    }

    // Case 2: List not empty
    struct node *current = head;

    // Get last node
    while (current->next != NULL) {
        // Move current to next node
        current = current->next;
    }

    // current is now pointing to last node
    // Join last node with new node
    current->next = new_node;
    return head;
}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // 1. Create counter variable
    int length = 0;

    // 2. Loop through linked list
    struct node *current = head;
    while (current!= NULL) {
        length++;
        current = current->next;
    }

    return length;
}
