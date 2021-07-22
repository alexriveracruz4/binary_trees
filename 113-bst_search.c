#include "binary_trees.h"

/**
 * bst_search - function that searches for a value in a Binary Search Tree
 * @tree:  is a pointer to the root node of the BST to search
 * @value: the value to search in the tree
 *
 * Return: a pointer to the node containing a value equals to value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	if (tree == NULL)
		return (NULL);

	tmp = (bst_t *)tree;
	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);
		if (tmp->n < value)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	}
	return (NULL);
}
