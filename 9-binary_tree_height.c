#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	/* si noeud actuel a un enfant droite,*/
	/* ajoute 1 a la hauteur avec recursivité */
		right = 1 + binary_tree_height(tree->right);
		left = 1 + binary_tree_height(tree->left);
		return (left > right ? left : right);
}
