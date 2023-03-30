#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary_tree
 *
 * @tree: pointer to the root node of the tree to count the
 * number of leaves.
 *
 * Return: Leaf count.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
	{
		leaf_count++;
		tree = tree->left;
	}
	if (tree->right)
	{
		leaf_count++;
		tree = tree->right;
	}

	return (leaf_count);
}
