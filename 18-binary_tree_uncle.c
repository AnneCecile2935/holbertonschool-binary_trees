#include "binary_trees.h"
/**
 * binary_tree_uncle - function that find the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;
if (node == NULL)
return (NULL);
if (node->parent == NULL)
return (NULL);
grandparent = node->parent->parent;
if (grandparent == NULL)
return (NULL);
if (node->parent == grandparent->left)
return (grandparent->right);
else
return (grandparent->left);
return (NULL);
}
