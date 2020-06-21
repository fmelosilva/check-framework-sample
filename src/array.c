#include <stdio.h>
#include <stdlib.h>

#include "array.h"

node_t* create_node(int content) {
    node_t* created_node = malloc(sizeof(node_t));
    created_node->content = content;

    return created_node; 
}
    

array_t array_initialize() {
    return NULL;
}


int push(array_t* array, int content) {
    if (array == NULL) {
        return -1;
    }

    node_t* created_node = create_node(content);
    created_node->next = *array;
    *array = created_node; 

    return 0;
}


int pop(array_t* array) {
    if (array == NULL || *array == NULL) {
        return -1;
    }
    
    node_t* last_node = *array;
    int last_node_content = last_node->content;
    *array = last_node->next;
    free(last_node);

    return last_node_content;
}

int array_length(array_t array) {
    int length = 0;
    node_t* curr_node = array;

    while (curr_node != NULL) {
        length++;
        curr_node = curr_node->next;
    }
    return length;
}

void print_array(array_t array) {
    node_t* curr_node = array;
    printf("[ "); 

    while (curr_node != NULL) {
        printf("%d ", curr_node->content);
        curr_node = curr_node->next;
    }

    printf("]\n");
}
