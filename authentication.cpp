/* Trie (User Authentication) */
#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H
#include <unordered_map>
#include <string>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    TrieNode();
};

class Trie {
private:
    TrieNode* root;
public:
    Trie();
    void insert(std::string word);
    bool search(std::string word);
};

#endif
