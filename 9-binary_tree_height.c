#include "binary_trees.h"

/**
 * _binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	/* si noeud actuel a un enfant droite,*/
	/* ajoute 1 a la hauteur avec recursivité */
		right = binary_tree_height(tree->right);
		left = binary_tree_height(tree->left);
		return (1 + ((right >= left) ? right : left));
}
