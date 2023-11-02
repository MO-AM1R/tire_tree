Certainly! Here's an updated README with the functions `insert`, `prefixSearch`, `search`, and `remove` included:

# Trie Tree C++ Application

This repository contains a C++ implementation of a Trie tree data structure. Trie trees are used for efficient storage and retrieval of strings, making them suitable for applications such as autocomplete, spell checking, and more.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [API](#api)
- [Contributing](#contributing)
- [License](#license)

## Installation

### Prerequisites

Before using this Trie Tree application, ensure you have the following prerequisites installed:

- C++ compiler with C++11 support (e.g., g++)

### Build from Source

1. Clone the repository to your local machine using Git:

   ```bash
   git clone https://github.com/your-username/trie-tree-cpp.git
   ```

2. Change the working directory to the project folder:

   ```bash
   cd trie-tree-cpp
   ```

3. Compile the source code using your C++ compiler:

   ```bash
   g++ -o trie-tree main.cpp TrieNode.cpp TrieTree.cpp
   ```

4. Run the application:

   ```bash
   ./trie-tree
   ```

## Usage

To use the Trie Tree in your C++ application, include the necessary header files and create a `TrieTree` object. Here's an example of how to use the Trie Tree:

```cpp
#include "TrieTree.h"

int main() {
    TrieTree trie;

    // Insert words into the Trie
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("cherry");

    // Search for a word in the Trie
    if (trie.search("banana")) {
        std::cout << "Found 'banana' in the Trie." << std::endl;
    } else {
        std::cout << "Word not found." << std::endl;
    }

    // Delete a word from the Trie
    trie.remove("banana");

    // Search again
    if (trie.search("banana")) {
        std::cout << "Found 'banana' in the Trie." << std::endl;
    } else {
        std::cout << "Word not found." << std::endl;
    }

    return 0;
}
```

## API

The Trie Tree C++ application provides the following public methods:

- `TrieTree::insert(const std::string& word)`: Inserts a word into the Trie.
- `TrieTree::prefixSearch(const std::string& prefix)`: Searches for words with a given prefix in the Trie.
- `TrieTree::search(const std::string& word)`: Searches for a word in the Trie.
- `TrieTree::remove(const std::string& word)`: Removes a word from the Trie.
- `TrieTree::isEmpty()`: Checks if the Trie is empty.
- `TrieTree::clear()`: Clears the Trie.
This Trie Tree C++ application is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute it as you see fit.
