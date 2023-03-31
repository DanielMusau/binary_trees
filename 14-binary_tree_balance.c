#include "binary_trees.h"

/**
 * recursive_height - Measures the height of a binary tree.
 *
 * @tree: Is a pointer to the root node of the tree to
 * measure the height.
 *
 * Return: The height of tree else 0.
 */
size_t recursive_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = recursive_height(tree->left);
	right_height = recursive_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Is a pointer to the root node of the tree to
 * measure the height.
 *
 * Return: The height of tree else 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_height(tree) - 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: is a pointer to the root node of the tree to measure
 * the balance factor.
 *
 * Return: balance measure or 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
