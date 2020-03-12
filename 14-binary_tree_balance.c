#include "binary_trees.h"
/**
 ** binary_tree_balance - checks the balance factor of a binary tree.
 **
 ** @tree: pointer to the root node of the tree to count the number of leaves.
 ** Return: balance factor.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	return (left - right);
}

/**
 * binary_tree_height - function that measures the height of a binary tree.
 *
 * @tree: pointer to the root node of the tree to delete.
 * Return: size of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0);

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	if (height_left > height_right)
	return (height_left);
	else
	return (height_right);
}
