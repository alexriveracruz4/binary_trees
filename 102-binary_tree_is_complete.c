#include "binary_trees.h"

/**
 * countNodes - function counts the number of nodes in a binary tree
 * @tree: poiter to the root of the tree
 *
 * Return: number of nodes
 */
int countNodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * isComplete - function that checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * @index: index assigned to current node
 * @number_nodes: number of nodes in tree
 *
 * Return: 1 if is complete, 0 otherwise
 */
int isComplete(const binary_tree_t *tree, int index, int number_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);
	return (isComplete(tree->left, 2 * index + 1, number_nodes) &&
		isComplete(tree->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is complete or If tree is NULL, your function must return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int node_count = countNodes(tree);
	int index = 0;

	if (tree == NULL)
		return (0);

	return (isComplete(tree, index, node_count));
}
