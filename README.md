# 🌳 Holberton School - Binary Trees Implementation

<div align="center">

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Data Structures](https://img.shields.io/badge/Data_Structures-FF6B6B?style=for-the-badge&logo=buffer&logoColor=white)
![Algorithms](https://img.shields.io/badge/Algorithms-0081CB?style=for-the-badge&logo=code&logoColor=white)
![Ubuntu](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)

[![Lines of Code](https://img.shields.io/badge/Lines_of_Code-500+-blue.svg)](.)
[![Functions](https://img.shields.io/badge/Functions-19+-green.svg)](.)
[![Betty Style](https://img.shields.io/badge/Code_Style-Betty-purple.svg)](https://github.com/holbertonschool/Betty)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

**A comprehensive implementation of binary tree data structures and algorithms in C**

</div>

---

> 🎯 **Project Overview**: This project explores binary tree concepts, implementing fundamental operations and algorithms for tree manipulation, traversal, and analysis. Developed as part of the Holberton School curriculum focusing on data structures and algorithms.

## 📑 Table of Contents

- [🌳 Holberton School - Binary Trees Implementation](#-holberton-school---binary-trees-implementation)
  - [📑 Table of Contents](#-table-of-contents)
  - [📝 Project Description](#-project-description)
  - [✨ Key Features](#-key-features)
  - [🏗️ Project Structure](#️-project-structure)
  - [🔍 Implemented Functions](#-implemented-functions)
    - [Core Operations](#core-operations)
    - [Tree Traversals](#tree-traversals)
    - [Tree Properties](#tree-properties)
    - [Tree Analysis](#tree-analysis)
    - [Relationship Operations](#relationship-operations)
  - [⚙️ Binary Tree Structure](#️-binary-tree-structure)
  - [🚀 Installation \& Compilation](#-installation--compilation)
  - [💻 Usage Examples](#-usage-examples)
  - [📊 Tree Visualization](#-tree-visualization)
  - [🧪 Testing](#-testing)
  - [📈 Complexity Analysis](#-complexity-analysis)
  - [📚 Learning Objectives](#-learning-objectives)
  - [📖 Resources](#-resources)
  - [👨‍💻 Author](#-author)
  - [📄 License](#-license)

## 📝 Project Description

This project provides a comprehensive implementation of **binary trees** in C, covering fundamental data structure concepts and algorithms. A binary tree is a hierarchical data structure where each node has at most two children, referred to as the left and right child.

### What You'll Learn
- 🔹 Understanding binary tree structures and properties
- 🔹 Implementing tree creation, insertion, and deletion operations
- 🔹 Mastering different tree traversal techniques
- 🔹 Analyzing tree properties (height, depth, balance)
- 🔹 Working with node relationships (parent, sibling, uncle)

## ✨ Key Features

- ✅ **Complete Binary Tree Implementation** - Full set of binary tree operations
- ✅ **Multiple Traversal Methods** - Pre-order, in-order, and post-order traversals
- ✅ **Tree Analysis Functions** - Height, depth, size, and balance calculations
- ✅ **Visual Tree Display** - Built-in tree visualization for debugging
- ✅ **Memory Management** - Proper allocation and deallocation
- ✅ **Betty Style Compliant** - Follows Holberton coding standards
- ✅ **Comprehensive Testing** - Test files for all implemented functions

## 🏗️ Project Structure

```
holbertonschool-binary_trees/
├── 📄 README.md                    # Project documentation
├── 📄 binary_trees.h               # Header file with function prototypes
├── 📄 binary_tree_print.c          # Tree visualization utility
├── 🔧 Core Operations/
│   ├── 0-binary_tree_node.c        # Node creation
│   ├── 1-binary_tree_insert_left.c # Left insertion
│   ├── 2-binary_tree_insert_right.c# Right insertion
│   └── 3-binary_tree_delete.c      # Tree deletion
├── 🔄 Traversals/
│   ├── 6-binary_tree_preorder.c    # Pre-order traversal
│   ├── 7-binary_tree_inorder.c     # In-order traversal
│   └── 8-binary_tree_postorder.c   # Post-order traversal
├── 📏 Properties/
│   ├── 4-binary_tree_is_leaf.c     # Leaf check
│   ├── 5-binary_tree_is_root.c     # Root check
│   ├── 9-binary_tree_height.c      # Height calculation
│   ├── 10-binary_tree_depth.c      # Depth calculation
│   └── 11-binary_tree_size.c       # Size calculation
├── 📊 Analysis/
│   ├── 12-binary_tree_leaves.c     # Count leaves
│   ├── 13-binary_tree_nodes.c      # Count internal nodes
│   ├── 14-binary_tree_balance.c    # Balance factor
│   ├── 15-binary_tree_is_full.c    # Full tree check
│   └── 16-binary_tree_is_perfect.c # Perfect tree check
├── 👥 Relationships/
│   ├── 17-binary_tree_sibling.c    # Find sibling
│   └── 18-binary_tree_uncle.c      # Find uncle
└── 🧪 tests/                       # Test files directory
    ├── 1-main.c
    ├── 2-main.c
    └── ...
```

## 🔍 Implemented Functions

### Core Operations
| File | Function | Description | Time Complexity |
|------|----------|-------------|----------------|
| [`0-binary_tree_node.c`](./0-binary_tree_node.c) | `binary_tree_node` | Creates a new binary tree node | O(1) |
| [`1-binary_tree_insert_left.c`](./1-binary_tree_insert_left.c) | `binary_tree_insert_left` | Inserts a node as the left-child of another node | O(1) |
| [`2-binary_tree_insert_right.c`](./2-binary_tree_insert_right.c) | `binary_tree_insert_right` | Inserts a node as the right-child of another node | O(1) |
| [`3-binary_tree_delete.c`](./3-binary_tree_delete.c) | `binary_tree_delete` | Deletes an entire binary tree | O(n) |

### Tree Traversals
| File | Function | Description | Time Complexity |
|------|----------|-------------|----------------|
| [`6-binary_tree_preorder.c`](./6-binary_tree_preorder.c) | `binary_tree_preorder` | Pre-order traversal of a binary tree | O(n) |
| [`7-binary_tree_inorder.c`](./7-binary_tree_inorder.c) | `binary_tree_inorder` | In-order traversal of a binary tree | O(n) |
| [`8-binary_tree_postorder.c`](./8-binary_tree_postorder.c) | `binary_tree_postorder` | Post-order traversal of a binary tree | O(n) |

### Tree Properties
| File | Function | Description | Time Complexity |
|------|----------|-------------|----------------|
| [`4-binary_tree_is_leaf.c`](./4-binary_tree_is_leaf.c) | `binary_tree_is_leaf` | Checks if a node is a leaf | O(1) |
| [`5-binary_tree_is_root.c`](./5-binary_tree_is_root.c) | `binary_tree_is_root` | Checks if a node is a root | O(1) |
| [`9-binary_tree_height.c`](./9-binary_tree_height.c) | `binary_tree_height` | Measures the height of a binary tree | O(n) |
| [`10-binary_tree_depth.c`](./10-binary_tree_depth.c) | `binary_tree_depth` | Measures the depth of a node in a binary tree | O(h) |
| [`11-binary_tree_size.c`](./11-binary_tree_size.c) | `binary_tree_size` | Measures the size of a binary tree | O(n) |

### Tree Analysis
| File | Function | Description | Time Complexity |
|------|----------|-------------|----------------|
| [`12-binary_tree_leaves.c`](./12-binary_tree_leaves.c) | `binary_tree_leaves` | Counts the leaves in a binary tree | O(n) |
| [`13-binary_tree_nodes.c`](./13-binary_tree_nodes.c) | `binary_tree_nodes` | Counts the nodes with at least one child | O(n) |
| [`14-binary_tree_balance.c`](./14-binary_tree_balance.c) | `binary_tree_balance` | Measures the balance factor of a binary tree | O(n) |
| [`15-binary_tree_is_full.c`](./15-binary_tree_is_full.c) | `binary_tree_is_full` | Checks if a binary tree is full | O(n) |
| [`16-binary_tree_is_perfect.c`](./16-binary_tree_is_perfect.c) | `binary_tree_is_perfect` | Checks if a binary tree is perfect | O(n) |

### Relationship Operations
| File | Function | Description | Time Complexity |
|------|----------|-------------|----------------|
| [`17-binary_tree_sibling.c`](./17-binary_tree_sibling.c) | `binary_tree_sibling` | Finds the sibling of a node | O(1) |
| [`18-binary_tree_uncle.c`](./18-binary_tree_uncle.c) | `binary_tree_uncle` | Finds the uncle of a node | O(1) |

## ⚙️ Binary Tree Structure

The project uses a well-defined structure for binary tree nodes:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;     /* Binary Search Tree */
typedef struct binary_tree_s avl_t;     /* AVL Tree */
typedef struct binary_tree_s heap_t;    /* Max Binary Heap */
```

### Structure Benefits
- 🔹 **Bidirectional Navigation**: Parent pointer allows upward traversal
- 🔹 **Flexible Type Definitions**: Same structure for different tree types
- 🔹 **Memory Efficient**: Minimal overhead per node
- 🔹 **Standard Compliance**: Compatible with C89/C90 standards

## 🚀 Installation & Compilation

### Prerequisites
- **GCC Compiler** (version 4.8.4 or later)
- **Ubuntu 20.04 LTS** (or compatible Linux distribution)
- **Git** (for cloning the repository)

### Clone the Repository
```bash
git clone https://github.com/Pmichel74/holbertonschool-binary_trees.git
cd holbertonschool-binary_trees
```

### Compilation Standards
All files are compiled with strict standards to ensure code quality:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

### Compile with Test Files
To compile a specific function with its test file:

```bash
# Example: Test the binary_tree_insert_left function
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    tests/1-main.c 1-binary_tree_insert_left.c \
    0-binary_tree_node.c binary_tree_print.c -o test_insert_left

# Run the test
./test_insert_left
```

### Makefile Usage (Optional)
Create a simple Makefile for easier compilation:

```makefile
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
NAME = binary_trees

SRC = *.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
```

## 💻 Usage Examples

### Basic Tree Creation
```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    
    /* Create root node */
    root = binary_tree_node(NULL, 98);
    
    /* Add children */
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    
    /* Insert using functions */
    binary_tree_insert_left(root->right, 256);
    binary_tree_insert_right(root->left, 54);
    
    /* Display the tree */
    binary_tree_print(root);
    
    /* Clean up */
    binary_tree_delete(root);
    return (0);
}
```

### Tree Traversal Example
```c
#include "binary_trees.h"

void print_num(int n)
{
    printf("%d ", n);
}

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 1);
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 3);
    
    printf("Pre-order: ");
    binary_tree_preorder(root, &print_num);
    printf("\n");
    
    printf("In-order: ");
    binary_tree_inorder(root, &print_num);
    printf("\n");
    
    printf("Post-order: ");
    binary_tree_postorder(root, &print_num);
    printf("\n");
    
    binary_tree_delete(root);
    return (0);
}
```

### Tree Analysis Example
```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    
    printf("Tree height: %lu\n", binary_tree_height(root));
    printf("Tree size: %lu\n", binary_tree_size(root));
    printf("Number of leaves: %lu\n", binary_tree_leaves(root));
    printf("Balance factor: %d\n", binary_tree_balance(root));
    printf("Is full: %s\n", binary_tree_is_full(root) ? "Yes" : "No");
    printf("Is perfect: %s\n", binary_tree_is_perfect(root) ? "Yes" : "No");
    
    binary_tree_delete(root);
    return (0);
}
```

## 📊 Visualization

The [binary_tree_print.c](./binary_tree_print.c) file provides a function to visualize the binary tree in the terminal. Here's an example output:

```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
```

## 📚 Resources

- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) (Wikipedia)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm) (TutorialsPoint)
- [Tree Traversal](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/) (GeeksforGeeks)

## 👤 Author

- **Patrick MICHEL** - [GitHub Profile](https://github.com/Pmichel74)

---

_This project is part of the Holberton School - Data Structures and Algorithms curriculum._
