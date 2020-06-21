#include "../src/array.h"


int main(int argc, char** argv) {
    array_t array = array_initialize();

    for (int i = 0; i < 100; i++) {
        push(&array, i);
    }

    print_array(array);

    for (int i = 0; i < 70; i++) {
        pop(&array);
    }

    print_array(array);

    for (int i = 50; i < 100; i++) {
        push(&array, i);
    }
    
    print_array(array);

    for (int i = 0; i < 200; i++) {
        pop(&array);
    }

    print_array(array);

    return 0;
}

