#include "binary_tree.h"

/**
 * binary_tree_insert_right - inserts a new node to the right of the parent.
 *
 * @parent: the parent in which the new node rith node must be inserted.
 * @value: The value to store in the new node.
 *
 * Return: NULL if it fails, a pointer to the new node otherwise.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
