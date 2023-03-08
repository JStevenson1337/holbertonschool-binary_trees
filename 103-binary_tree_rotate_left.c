#include "binary_trees.h"
/**
  * binary_tree_rotate_left - Performs a left-rotation on a binary tree
  *
  * @tree: Pointer to a tree structure
  *
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node;
	int x = 0;

	if (!tree)
	{
		return (NULL);
	}
	/* root of parent == NULL */
	if (node->next != '\0')
	{
		if (node->left->left == NULL)
		{
			node->right = node->left->left;
			printf("%i", node -> n);
		}
		
	}
	return (tree);
}
