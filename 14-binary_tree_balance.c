#include "binary_trees.h"
/**
 * binary_tree_height2 - function to measure the height of tree int
 * @tree: pointer to the root node of tree
 * Return: height of tree in a int
 */
int binary_tree_height2(const binary_tree_t *tree)
{
int left;
int right;
if (tree == NULL)
return (0);
left = binary_tree_height2(tree->left);
right = binary_tree_height2(tree->right);
return (1 + (left > right ? left : right));
}
/**
 * binary_tree_balance - function measure balance factor of binary tree
 * @tree: pointer to the root node of the tree measure the balance factor
 * Return: diff between height left and height right
 */
	int binary_tree_balance(const binary_tree_t *tree)
	{
		int height_left;
		int height_right;
	if (tree == NULL)
		return (0);
	height_left = binary_tree_height2(tree->left);
	height_right = binary_tree_height2(tree->right);
	return ((int)height_left - (int)height_right);
	}
