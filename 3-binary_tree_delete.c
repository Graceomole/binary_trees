#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: Always new_tree to left node
 */
void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *node = tree;
    binary_tree_t *ptr[3];
    ptr[0] = tree;
    while (ptr[0] != NULL)
    {
        node = ptr[0];
        ptr[1] = node->left;
        ptr[2] = node->right;
        ptr[0] = ptr[1];
        ptr[1] = ptr[2];
        free(node);
    }
    
}
