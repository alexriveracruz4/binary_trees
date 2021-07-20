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

	return (height(tree) - 1);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}
