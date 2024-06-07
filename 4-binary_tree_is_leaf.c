#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verify is a node is a leaf
 *
 * @node: (object), a node
 * Description: This function checks if a node of a
 * binary tree is a node or not
 * Return: 1 ON SUCCESS, 0 ON FAILURE
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right)
		return (0);

	return (1);
}
