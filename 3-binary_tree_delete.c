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
	binary_tree_t *nodeleft = tree->left;
	binary_tree_t *noderighrt = tree->right;
	if (tree == NULL)
	{
		;
	}
	else
	{
		free(tree)
	}

	binary_tree_delete(nodeleft);
	binary_tree_delete(noderighrt);
}
