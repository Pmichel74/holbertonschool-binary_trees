#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;/* compteur de feuilles*/

	if (tree)
		/*ajoute 1 si c une feuille sinon 0*/
	{	leaf += (!tree->left && !tree->right) ? 1 : 0;
		leaf += binary_tree_leaves(tree->left);/*ajoute feuilles dans sous arbre L*/
		leaf += binary_tree_leaves(tree->right);/*ajoute feuilles dans sous arbre R*/
	}
	return (leaf);
}
