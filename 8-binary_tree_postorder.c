#include "binary_trees.h"

/**
 * binary_tree_postorder - function that traverses a binary tree on postorder.
 *
 * @tree: pointer to the root node of the tree to delete.
 * @func: pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	return;
	if (func == NULL)
	return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
