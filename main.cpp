# include "TrieTree.h"

int main() {
    TrieTree tree ;
    tree.insert("abc") ;
    tree.insert("lmn") ;
    tree.insert("abg") ;

    // should print 1 for all
    cout << tree.prefixSearch("ab") << endl ;
    cout << tree.prefixSearch("lm") << endl ;
    cout << tree.prefixSearch("abg") << endl ;

    // should print 1 for all
    cout << tree.searchOfWord("abc") << endl ;
    cout << tree.searchOfWord("lmn") << endl ;
    cout << tree.searchOfWord("abg") << endl ;

    // should print 0 for all
    cout << tree.prefixSearch("ac") << endl ;
    cout << tree.searchOfWord("abcd") << endl ;

    tree.remove("abc") ;
    tree.remove("lmn") ;

    // should print 1 for last one
    cout << tree.searchOfWord("abc") << endl ;
    cout << tree.searchOfWord("lmn") << endl ;
    cout << tree.searchOfWord("abg") << endl ;

    return 0;
}
