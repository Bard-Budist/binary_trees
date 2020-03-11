#include "binary_trees.h"
/**
 * binary_tree_depth - function that traverses a binary tree on postorder.
 *
 * @tree: pointer to the root node of the tree to delete.
 * Return: value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int value = 0;

	if (tree != NULL)
	{
		if (tree->parent != NULL)
			value = binary_tree_depth(tree->parent) + 1;
	}
	return (value);
}
