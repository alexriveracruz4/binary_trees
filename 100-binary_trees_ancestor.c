#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth or If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tmp;
	size_t d = 0;

	if (tree == NULL)
		return (0);

	tmp = tree;
	while (tmp->parent)
	{
		d++;
		tmp = tmp->parent;
	}
	return (d);
}

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor
 * of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t d1;
	size_t d2;

	if (first == NULL || second == NULL)
		return (NULL);

	d1 = binary_tree_depth(first);
	d2 = binary_tree_depth(second);

	if (d1 > d2)
		return (binary_trees_ancestor(first->parent, second));
	if (d2 > d1)
		return (binary_trees_ancestor(first, second->parent));
	if (first == second)
		return ((binary_tree_t *)first);
	return (binary_trees_ancestor(first->parent, second->parent));
}
