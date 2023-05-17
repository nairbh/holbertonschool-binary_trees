# Binary Trees Project

This project is focused on the creation and manipulation of Binary Trees. It includes a set of functions for creating nodes, inserting nodes, and performing various analysis tasks on the trees.

## Table of Contents
- [Compilation & Execution](#compilation--execution)
- [The Binary Tree](#the-binary-tree)
- [Binary Tree Files](#binary-tree-files)
- [The Binary Tree Program](#the-binary-tree-program)
- [Supported Functions](#supported-functions)
- [Exit Status](#exit-status)
- [File Structure](#file-structure)
- [Testing](#testing)
- [Author](#author)

## Compilation & Execution

Compile the Binary Trees project using the following command:

```shell
gcc -Wall -Werror -Wextra -pedantic *.c -o output_file_name
```

> :information_source: The program's output is printed on `stdout`, while error messages are printed on `stderr`.

## The Binary Tree

A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child. This project provides a set of functions to manipulate these structures.

## Binary Tree Files

This project includes several C source files, each implementing one or more functions to create or manipulate binary trees.

## The Binary Tree Program

You can compile and run the individual programs with the following command:

```shell
gcc -Wall -Werror -Wextra -pedantic *.c -o program && ./program
```

## Supported Functions

This project includes the following functions:

- `binary_tree_node`: Creates a binary tree node.
- `binary_tree_insert_left`: Inserts a node as the left-child of another node.
- `binary_tree_insert_right`: Inserts a node as the right-child of another node.
- `binary_tree_delete`: Deletes an entire binary tree.
- `binary_tree_is_leaf`: Checks if a node is a leaf.
- `binary_tree_is_root`: Checks if a node is a root.
- `binary_tree_preorder`: Goes through a binary tree using pre-order traversal.
- `binary_tree_inorder`: Goes through a binary tree using in-order traversal.
- `binary_tree_postorder`: Goes through a binary tree using post-order traversal.
- `binary_tree_height`: Measures the height of a binary tree.
- `binary_tree_depth`: Measures the depth of a node in a binary tree.
- `binary_tree_size`: Measures the size of a binary tree.
- `binary_tree_leaves`: Counts the leaves in a binary tree.
- `binary_tree_nodes`: Counts the nodes with at least 1 child in a binary tree.
- `binary_tree_balance`: Measures the balance factor of a binary tree.
- `binary_tree_is_full`: Checks if a binary tree is full.
- `binary_tree_is_perfect`: Checks if a binary tree is perfect.
- `binary_tree_uncle` : Function that finds the uncle of a node.

## Exit Status

The Binary Trees project returns the following exit statuses:

- `EXIT_SUCCESS` (0): Successful execution.
- `EXIT_FAILURE` (1): An error occurred during execution.

## File Structure

The Binary Trees project includes the following key files:

- `binary_trees.h`: Header file containing function prototypes and the definition of the `binary_tree_t` type.
- `*.c`: C source files implementing the binary tree functions.

## Testing

To ensure the correctness of the project, it's recommended to write a comprehensive set of tests covering all functions and edge cases.

## Author


This Binary Trees project was created by:

- [Nairbh](https://github.com/nairbh)
- [Arez](https://github.com/Wayzer2318) 
