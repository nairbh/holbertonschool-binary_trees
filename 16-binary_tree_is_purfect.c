#include "binary_trees.h"

/**
* binary_tree_is_perfect - check if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if tree is perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);
  if (tree->left == NULL && tree->right == NULL)
    return (1);
  if (tree->left == NULL || tree->right == NULL)
    return (0);
  if (tree->left->n < tree->right->n)
    return (binary_tree_is_perfect(tree->left));
  if (tree->left->n > tree->right->n)
    return (binary_tree_is_perfect(tree->right));
  return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
