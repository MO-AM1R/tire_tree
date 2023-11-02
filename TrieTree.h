# ifndef TRIE_TREE_TRIETREE_H
# define TRIE_TREE_TRIETREE_H
# include <iostream>
# include <map>
using namespace std ;

struct TrieNode{
    map<char, TrieNode*> children ;
    bool endOfWOrd ;

    explicit TrieNode() : endOfWOrd(false) {}
};

class TrieTree {
    TrieNode* root ;

    TrieTree() = default ;

    void insert(const string& key){
        TrieNode* current = root ;

        for (const char& c: key) {
            TrieNode* node = current->children[c] ;
            if (node == nullptr){
                node = new TrieNode() ;
                current->children.insert({c, node}) ;
            }
            current = node ;
        }
        current->endOfWOrd = true ;
    }

    [[nodiscard]] bool prefixSearch(const string& key) const{
        TrieNode* current = root ;

        for (const char& c: key) {
            TrieNode* node = current->children[c] ;
            if (node == nullptr){
                return false ;
            }
            current = node ;
        }
        return true ;
    }
};

# endif //TRIE_TREE_TRIETREE_H