#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree
*
* @tree: Pointer to the root node of the tree to traverse
* Return: The height of the binary tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (left > right ? left : right);
}

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: A pointer to the root node of the tree to measure the size.
*
* Return: The size of the tree. If the tree is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: A pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect_size = (1 << (height + 1)) - 1;
	return (size == perfect_size);
}
