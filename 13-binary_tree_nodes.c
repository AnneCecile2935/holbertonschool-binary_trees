#include "binary_trees.h"
/**
 *binary_tree_nodes - function to count the number
 *of nodes with at least 1 child
 *@tree: pointer to the root node of tree to count the number of nodes
 *Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
count = 1;
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
return (count);
}
