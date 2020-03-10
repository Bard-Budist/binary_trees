#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * @parent: pointer to the node to insert the left-child in.
 * @value: the value to put in the new node.
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
		parent->left = new_node;
		return (new_node);
	}
	else
	{
		tmp = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = tmp;
		return (new_node);
	}
}
