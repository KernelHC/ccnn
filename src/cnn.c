#include <cnn.h>

typedef struct layer Layer;
typedef struct node Node;

struct cnn {
    Layer* layers;
};

struct layer {
    Node** nodes;
};
