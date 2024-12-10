#include "binary_trees.h"

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

/**
 * sub_tree_perfect - Checks if a subtree is perfect
 * @tree: Pointer to the root node of the subtree to check
 *
 * Return: 1 if the subtree is perfect, 0 otherwise
 *
 * Description: A subtree is considered perfect if:
 *              - It's a leaf (no children)
 *              - Or it has two children and both subtrees are perfect
 */
int sub_tree_perfect(const binary_tree_t *tree)
{
	if (!tree)
	return (0);
	return (1 + sub_tree_perfect(tree->left)
			+ sub_tree_perfect(tree->right));

}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	if (binary_tree_balance(tree) != 0)
	return (0);
	return (sub_tree_perfect(tree->left) + sub_tree_perfect(tree->right));
}
