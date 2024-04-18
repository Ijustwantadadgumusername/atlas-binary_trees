#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - determines if a specified node is the root of a tree
 * @node: the specified node
 *
 * Return: 1 if @node is the root, 0 if @node is NULL or not the root
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
		return (0);
	}
	return (0);
}
