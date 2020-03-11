#include "binary_trees.h"
/**
 * binary_tree_depth - function that traverses a binary tree on postorder.
 *
 * @tree: pointer to the root node of the tree to delete.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    int height_left;
	int height_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	return (height_left + 1);
	else
	return (height_right + 1);
}