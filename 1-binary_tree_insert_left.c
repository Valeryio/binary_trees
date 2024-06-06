#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert in the left part of the binary tree
 *
 * @parent: (object) the parent node
 * @value: (int) the value to insert
 * Description: This function insert a node to the left of another node
 * Return: An object
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Initialiazing the values of the the new node */
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Remplace an existing node by the left side */
	if (parent->left != NULL)
	{
		tmp = parent->left;

		new_node->left = tmp;
		new_node->parent = parent;
		parent->left = new_node;

		return (new_node);
	}

	/* Adding a new node to left if not existing */
	new_node->parent = parent;
	parent->left = new_node;

	return (new_node);
}
