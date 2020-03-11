#include "binary_trees.h"
/**
 ** binary_tree_nodes - function that counts the nodes in a binary tree.
 **
 ** @tree: pointer to the root node of the tree to count the number of nodes.
 ** Return: number of nodes.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes_right = 0;
	int nodes_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	nodes_right = binary_tree_nodes(tree->right) + 1;
	nodes_left = binary_tree_nodes(tree->left);
	return (nodes_left + nodes_right);
}
