#include "binary_trees.h"

/**
 * binary_tree_preorder - use preorder traversal
 *
 * @tree: (object), the tree we want to traverse
 * @func: (object), a pointer to function
 * Description: This function go through a binary
 * tree with preorder algorithm
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{

	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
