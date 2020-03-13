#include "binary_trees.h"
/**
 * binary_tree_is_perfect - PErfetc
 * @tree: adawd
 * Return: awdawd
 *
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int contador = 2, formula = 1;
	int heig = 0, size;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	heig = (int)binary_tree_height(tree);
	while (formula < heig + 1)
	{
		contador *= 2;
		formula += 1;
	}

	size = (int)binary_tree_size(tree);

	if ((contador - 1) == size || size == 0)
		return (1);
	else
		return (0);
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
