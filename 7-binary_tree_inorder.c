#include "binary_trees.h"

/**
 * binary_tree_inorder - use preorder traversal
 *
 * @tree: (object), the tree we want to traverse
 * @func: (object), a pointer to function
 * Description: This function go through a binary
 * tree with inorder algorithm
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
