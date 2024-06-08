#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 *
 * @tree: (object) a tree
 * Description: This function deletes an entire
 * tree.
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	// Now how to delete an entire tree 
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
