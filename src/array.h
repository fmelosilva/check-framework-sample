
typedef struct node_t {
    struct node_t* next;
    int content;
} node_t;


typedef node_t *array_t;


node_t* create_node(int content);


array_t array_initialize();


int push(array_t* array, int content);


int pop(array_t* array);


int array_equal(array_t* array);


int array_length(array_t array);

void print_array(array_t array);
