#include "binary_trees.h"
/**
 ** binary_tree_leaves - function that counts the leaves in a binary tree.
 **
 ** @tree: pointer to the root node of the tree to count the number of leaves.
 ** Return: number of leaves.
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leaves += 1;
	if (tree->right != NULL)
		leaves += 1;
	if (tree->right == NULL && tree->left == NULL)
		leaves += 1;

	return (leaves);
}
