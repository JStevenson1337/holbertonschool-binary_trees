#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * @parent: Pointer to the parent node
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	while (parent != NULL)
	{
		if (parent->left != NULL)
		{
			parent = parent->left;
		}
		else
		{
			node = binary_tree_node(parent, value);
			if (node == NULL)
				return (NULL);
			parent->left = node;
			return (node);
		}
	}
	return (NULL);
	}

