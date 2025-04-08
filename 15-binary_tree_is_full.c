#include "binary_trees.h"
/**
 * binary_tree_is_full - function to check if tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;
if (tree == NULL)
	return (0);
		if (tree->left == NULL && tree->right == NULL)
		return (1);
		if (tree->left == NULL || tree->right == NULL)
		return (0);
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
}
