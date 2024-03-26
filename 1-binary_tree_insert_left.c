#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of the parent.
 *
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 *
 * Return: NULL on failure, a pointer to the newly created node otherwise.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
