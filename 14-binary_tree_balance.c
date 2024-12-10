#include "binary_trees.h"

#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left;
	size_t right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left) + 1;
		right = binary_tree_height(tree->right) + 1;

		if (left > right)
			return (left);
		else
			return (right);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)

{
		if (!tree)
				return (0);
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
