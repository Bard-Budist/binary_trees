#include "binary_trees.h"
/**
 ** binary_tree_balance - checks the balance factor of a binary tree.
 **
 ** @tree: pointer to the root node of the tree to count the number of leaves.
 ** Return: balance factor.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int tree_height = 0;
	int b_f;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		b_f = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	}
	else if (tree->left == NULL && tree->right != NULL)
	{
		b_f = (-1) - binary_tree_height(tree->right);
	}
	else if (tree->left != NULL && tree->right == NULL)
	{
		b_f = binary_tree_height(tree->left) - tree_height;
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		b_f = 0;
	}

	return (b_f);
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
