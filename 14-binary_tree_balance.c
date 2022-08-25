#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0;
	size_t rightheight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left)
		{
			leftheight += 1;
		}
		else
		{
			rightheight += 1;
		}
		leftheight += binary_tree_height(tree->left);
		rightheight += binary_tree_height(tree->right);
	}
	if (leftheight > rightheight)
	{
		return (leftheight);
	}
	else
	{
		return (rightheight);
	}
}
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size_t
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
}
