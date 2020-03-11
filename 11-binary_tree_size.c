#include "binary_trees.h"
/**
 ** binary_tree_size - function that measures the height of a binary tree.
 **
 ** @tree: pointer to the root node of the tree to delete.
 ** Return: size of the tree.
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
