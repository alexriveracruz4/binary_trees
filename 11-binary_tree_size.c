#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size or If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		s += binary_tree_size(tree->left) + 1;
	if (tree->right)
	{
		if (tree->left)
			s--;
		s += binary_tree_size(tree->right) + 1;
	}
	return (s);
}
