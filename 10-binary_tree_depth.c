#include "binary_trees.h"

/**
 * binary_tree_depth - get the binary height of a tree
 *
 * @tree: (object), the tree to traverse
 * Description: This function traverse a tree and return
 * its height
 * Return: An integer
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree->parent)
		return (0);
	return ((size_t) binary_tree_depth(tree->parent) + 1);
}
