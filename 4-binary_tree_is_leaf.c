#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function to check if node is leaf
 * @node: the node of tree
 * Return: 1 if is leaf, 0 if it is not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);
	if (node->left == NULL && node->right == NULL)
	return (1);
	return (0);
}
