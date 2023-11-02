# ifndef TRIE_TREE_TRIETREE_H
# define TRIE_TREE_TRIETREE_H
# include <iostream>
# include <map>
using namespace std ;

struct TrieNode{
    map<char, TrieNode*> children ;
    bool endOfWOrd ;
};

class TrieTree {

};

# endif //TRIE_TREE_TRIETREE_H