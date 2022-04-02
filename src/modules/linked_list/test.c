#include <stdio.h>
#include "./linked_list.h"

int main() {
    node* linkedList = create(0);
    push(linkedList, 10);
    push(linkedList, 20);
    push(linkedList, 30);
    push(linkedList, 40);
    push_front(&linkedList, 200);

    printf("Value head before: %d\n", value_at(linkedList, 0));
    printf("Value tail before: %d\n", value_at(linkedList, 5));

    reverse(&linkedList);

    printf("Value head after: %d\n", value_at(linkedList, 0));
    printf("Value tail after: %d\n", value_at(linkedList, 5));

    return 0;
};


int floatArray() {
    float array[10];

    for(float i = 1.000; i <= 10; i++) {
        array[(int)i] = i;
    }

    for(int i = 0; i < 10; i++) {
        printf("%f\n", array[i]);
    }

    return 0;
}