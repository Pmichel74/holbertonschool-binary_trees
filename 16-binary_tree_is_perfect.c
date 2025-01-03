#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree
*
* @tree: Pointer to the root node of the tree to traverse
* Return: The height of the binary tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_H = 0, right_H = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_H = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_H = 1 + binary_tree_height(tree->right);

	return (left_H > right_H ? left_H : right_H);
}

/**
* binary_tree_size - Measures the size of a binary tree.
* The size is the total numbers of nodes.
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
	/*équivalent à 2^(height + 1)*/
	perfect_size = (1 << (height + 1)) - 1;
	return (size == perfect_size);
}
