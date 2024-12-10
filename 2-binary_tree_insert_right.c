#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.

 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new;
	binary_tree_t *temp;

	(void) (*new);
	(void) (value);

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
		new->parent = parent;
		temp->parent = new;

	}

return (new);
}