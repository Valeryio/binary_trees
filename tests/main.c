#include "binary_trees.h"

/**
 * create - create a node
 *
 * Description: This function creates a node in
 * a binary_tree
 * Return: A pointer to the new_node
 */

// This program is from Jenny's lecture videos on
// datastructures on Youtube

binary_tree_t *create()
{
	binary_tree_t *new_node = NULL;
	int data = 0;

	new_node = (binary_tree_t*) malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	scanf("Give the data for the node : %d", &data);

	if (data == 0)
		return (0);
	
	new_node->n = data;
	
	printf("Enter the left node\n");
	new_node->left = create();
	printf("Enter the right node\n");
	new_node->right = create();

	return (new_node);
}
