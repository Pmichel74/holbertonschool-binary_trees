#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node
 *
 * @parent: Pointer to parent of node to create
 * @value: Value to insert in the desired node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
