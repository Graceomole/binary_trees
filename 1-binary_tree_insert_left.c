#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));
	binary_tree_t *left;

	if (new_tree == NULL || parent == NULL)
	{
		return NULL;
	}

	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	new_tree->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new_tree;
	}
	else
	{
		new_tree->left = parent->left;
		parent->left = new_tree;
		(new_tree->left)->parent = new_tree;
	}
	return new_tree;
}
