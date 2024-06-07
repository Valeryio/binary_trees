#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root
 *
 * @node: (object), a node
 * Description: This function checks if a node is the
 * root in the binary tree
 * Return: 1 ON SUCCESS, 0 ON FAILURE
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	return (1);
}
