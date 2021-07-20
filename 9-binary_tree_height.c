#include "binary_trees.h"

#define MAX(x, y) ((x) > (y) ? (x) : (y))

/**
 * height - mesaure the height of a binary tree
 * @tree: a pointer to the root node
 *
 * Return: height
 */

size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (MAX(height(tree->left), height(tree->right)) + 1);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: height or If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree) - 1);
}
