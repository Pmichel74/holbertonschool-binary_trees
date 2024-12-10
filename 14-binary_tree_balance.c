#include "binary_trees.h"

/**
 * _binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	/* si noeud actuel a un enfant droite,*/
	/* ajoute 1 a la hauteur avec recursivité */
	right = tree->right ? 1 + _binary_tree_height(tree->right) : 0;
	left = tree->left ? 1 + _binary_tree_height(tree->left) : 0;

	return (left > right ? left : right);
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

		return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
