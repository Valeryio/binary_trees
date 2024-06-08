#include "binary_trees.h"

/**
 * binary_tree_postorder - use preorder traversal
 *
 * @tree: (object), the tree we want to traverse
 * @func: (object), a pointer to function
 * Description: This function go through a binary
 * tree with postorder algorithm
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
