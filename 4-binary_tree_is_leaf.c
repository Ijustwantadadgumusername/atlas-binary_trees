#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - determine whether a specified node is a leaf
 * @node: the node being checked
 *
 * Return: 1 if the node is a leaf, 0 if not, or if it is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		return (0);
	}
	return (0);
}
