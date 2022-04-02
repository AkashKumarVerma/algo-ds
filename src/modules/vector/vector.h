#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef struct Vector Vector;
typedef int vector_value_type;

Vector* create(int);
void destroy(Vector*);

vector_value_type value_at(Vector*, int);
void push(Vector*, int);
void push_front(Vector**, int);

vector_value_type pop(Vector*);
vector_value_type pop_front(Vector**);

int is_empty(Vector*);
int size(Vector*);

void clear(Vector*);

#endif