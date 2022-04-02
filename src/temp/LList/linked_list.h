#ifndef _LINKEDLIST_H
  #define _LINKEDLIST_H

  typedef struct _node* node;
  typedef int value_type;

  node       create_llist(value_type);
  void       push_back(node, value_type);
  value_type value_at(node, int);
  int        size(node);
  _Bool       empty(node);
  void       push_front(node, value_type);
  value_type pop_front(node);

  // push_back(value)
  // pop_back()
  // front()
  // back()
  // insert(index, value)
  // erase(index)
  // value_n_from_end(n)
  // reverse()
  // remove_value(value)

#endif