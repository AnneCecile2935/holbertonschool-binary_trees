#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert a node to the right
 * @parent: he parent node of new_node
 * @value: value of the new_node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
