#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Description: The uncle of a node is the sibling of its parent.
 *
 * Return: Pointer to the uncle node, or NULL if:
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent
	|| !node->parent->parent->left
	|| node->parent->parent->right)
	return (NULL);

	uncle = node->parent->parent->right;
	uncle = (node->parent == uncle) ? node->parent->parent->left : uncle;

	return (uncle);
}
