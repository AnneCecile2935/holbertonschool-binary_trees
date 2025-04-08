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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node to check
 * Return: 1 if is perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left == NULL || tree->right == NULL)
return (0);
left_height = binary_tree_height2(tree->left);
right_height = binary_tree_height2(tree->right);
if (left_height == right_height)
return (binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right));
else
return (0);
}
