#include "binary_trees.h"

#define MIN(x, y) ((x) > (y) ? (y) : (x))
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
		return (MIN(binary_tree_is_full(tree->left),
			    binary_tree_is_full(tree->right)));

	if (!tree->left && !tree->right)
		return (1);
	return (0);
}
