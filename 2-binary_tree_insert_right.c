#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	while (parent != NULL)
	{
		if (parent->right != NULL)
		{
			parent = parent->right;
		}
		else
		{
			node = binary_tree_node(parent, value);
			if (node == NULL)
				return (NULL);
			parent->right = node;
			return (node);
		}
	}
	return (NULL);
}
