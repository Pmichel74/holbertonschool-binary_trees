#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 *         If node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
    return (0);

    if (node->parent == NULL)
    return (1);

    return(0);
}