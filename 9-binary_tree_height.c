#include "binary_trees.h"

/**
 * binary_tree_height - get the binary height of a tree
 *
 * @tree: (object), the tree to traverse
 * Description: This function traverse a tree and return
 * its height
 * Return: An integer
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (-1);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	return (r_height + 1);
}
