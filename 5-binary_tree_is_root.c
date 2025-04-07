#include "binary_trees.h"
/**
 * binary_tree_is_root - function that check if a given node is a root
 * @node: pointer to the root of node
 * Return: value 1 or 0 if is true or false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->parent != NULL)
return (0);
return (1);
}
