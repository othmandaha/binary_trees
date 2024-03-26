#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node.
 *
 * @parent: the parent of the binary tree
 * @value: the value to be stored in the new node.
 *
 * Return: NULL on failure, a pointer to the new node otherwise.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
