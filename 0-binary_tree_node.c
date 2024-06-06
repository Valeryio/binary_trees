#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 *
 * @parent: (binary_tree), the parent tree
 * @value: (int), the value of the new node
 * Description: This function creates a new node
 * of a binary tree
 * Return: A node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*binary_tree_t *current = NULL*/
	binary_tree_t *new_node = NULL;

	/*Allocation and verification of the new allowed space*/
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	/* parent = new_node; */

	return (new_node);
}
