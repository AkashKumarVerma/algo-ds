#ifndef _LINKEDLIST_H
  #define _LINKEDLIST_H

  typedef struct ListNode *ListNode;
  typdef int value_type;

  ListNode create(value_type);
  void push(ListNode, value_type);