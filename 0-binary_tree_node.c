#include "binary_trees.h"
/**
*binary_tree_node - function to create a binary tree node
*@parent: the parent node of new_node
*@value: value of the new_node
*Return: pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(*parent));
if (new_node == NULL)
{
printf("Erreur allocation mémoire\n");
exit(EXIT_FAILURE);
}
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;
return (new_node);
}
