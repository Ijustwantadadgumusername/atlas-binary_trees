#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a new node on a left branch
 * @parent: the parent of the new node
 * @value: the value held by the new node
 *
 * Return: a pointer to the new node, or NULL on a failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *temp = NULL;

	if (parent == NULL)
		return (0);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (0);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = newnode;
	}
	else
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->left = temp;
		temp->parent = newnode;
	}
	return (newnode);
}
