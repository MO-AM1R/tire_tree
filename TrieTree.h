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

    bool remove(TrieNode* _root, const string& word, int index){
        if (index == word.size()){
            if (!_root->endOfWOrd){
                return false;
            }
            _root->endOfWOrd = false ;
            return (int)_root->children.size() == 0;
        }
        TrieNode* node = _root->children[word[index]] ;
        if (node == nullptr){
            return false;
        }

        bool deleteFlag = remove(node, word, index + 1);
        if (deleteFlag){
            _root->children.erase(word[index]);
            return (int)_root->children.size() == 0;
        }
        return false;
    }

public:
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

    [[nodiscard]] bool searchOfWord(const string& word) const{
        TrieNode* current = root ;

        for (const char& c: word) {
            TrieNode* node = current->children[c] ;
            if (node == nullptr){
                return false ;
            }
            current = node ;
        }
        return current->endOfWOrd ;
    }

    void remove(const string& word){
        if (searchOfWord(word)){
            remove(root, word, 0) ;
        }
    }
};

# endif //TRIE_TREE_TRIETREE_H