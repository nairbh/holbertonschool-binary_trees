#include "binary_trees.h"

/**
* binary_tree_is_perfect - check if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if tree is perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_hight;

	if (tree == NULL)

		return (0);

	if (tree->left == NULL && tree->right == NULL)

		return (1);

	if (tree->left == NULL || tree->right == NULL)

	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
	return (1);

	return (0);
}
