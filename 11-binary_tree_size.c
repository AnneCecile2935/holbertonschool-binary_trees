#include "binary_trees.h"
/**
 * binary_tree_size - function the measure the size of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + binary_tree_size(tree->left + binary_tre__size(tree->right)));
}
