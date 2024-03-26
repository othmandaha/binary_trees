#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is the root node.
 *
 * @node: the node to be checked.
 *
 * Return: 1 if the node is root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
		return (0);

	return (1);
}
