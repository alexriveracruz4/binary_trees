#include "binary_trees.h"

/**
 * isBst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @key: key for comparison
 * @first: check for first time using
 * @check: return
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int isBst(const binary_tree_t *tree, int *key, int *first, int *check)
{
	if (tree->left)
		*check = isBst(tree->left, key, first, check);
	if (*first == 0)
	{
		*key = tree->n;
		*first = 1;
	}
	else
	{
		if (*key >= tree->n)
			return (0);
		*key = tree->n;
	}
	if (tree->right && *check == 1)
		*check = isBst(tree->right, key, first, check);
	return (*check);
}

/**
 * binary_tree_is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int key = 0;
	int first = 0, check = 1;

	if (tree == NULL)
		return (0);

	return (isBst(tree, &key, &first, &check));
}
