#include "binary_trees.h"
/**
 ** binary_tree_leaves - function that counts the leaves in a binary tree.
 **
 ** @tree: pointer to the root node of the tree to count the number of leaves.
 ** Return: number of leaves.
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves_right = 0;
	int leaves_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);
	return (leaves_left + leaves_right);
}
