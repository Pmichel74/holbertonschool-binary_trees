#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	/*ajoute 1 et continue recursivement vers le haut*/
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);

}
