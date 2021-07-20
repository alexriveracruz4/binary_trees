#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: nodes or If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		n += binary_tree_nodes(tree->left) + 1;
	if (tree->right)
	{
		if (tree->left)
			n--;
		n +=  binary_tree_nodes(tree->right) + 1;
	}
	return (n);
}
