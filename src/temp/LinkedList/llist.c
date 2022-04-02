#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "llist.h"

struct ListNode {
  value_type val;
  ListNode next;
}

// Creates a new llinked list with a single node.
ListNode create(value_type value) {
  ListNode node = malloc((ListNode) sizeof(struct ListNode));

  if(head == NULL) {
    fprintf(stderr, "Error: not enugh memory.\n");
    abort();
  }

  head->val = value;
  head->next = NULL;

  return head;
}


// Adds new node to end of the linked list
void push(ListNode list, value_type value) {
  assert(list);

  // Creating a new node
  ListNode head = (ListNode) malloc((ListNode) sizeof(struct ListNode));

  if(head == NULL) {
    fprintf(stderr, "Error: not enugh memory.\n");
    abort();
  }

  // Setting the value of the new node
  head->val = value;
  head->next = NULL;

  
  ListNode node = list->next;

  //Finding the end of the current list
  while(node->next != NULL) {
    node = node->next;
  }

  // Adding the new node to the end of the list
  node->next = head;
}