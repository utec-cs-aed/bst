#ifndef BSTREE_H
#define BSTREE_H
#include "node.h"

using namespace std;

template <typename T>
class BSTree {
    private:
        NodeBT<T>* root;    
    public:
        BSTree(): root(nullptr) {}

        void insert(T value) {
            insert(this->root, value);
        }

        bool find(T value) {
            return find(this->root, value);
        }

        // TODO: implement all         
        void displayInOrder();
        void displayPreOrder();
        void displayPostOrder();
        int height();
        T minValue();
        T maxValue();
        void remove(T value);
        bool isBalanced();
        int size();

        // TODO: PART 2
        bool isFull();
        void removeRepeats();
        T successor(T value);
        T predecessor(T value);
        void clear();
        void buildFromOrderedArray(T *array, int n);

    private:
        void insert(NodeBT<T>* &node, T value);
        bool find(NodeBT<T>* node, T value);
        void displayInOrder(NodeBT<T>* node);
}; 

template <typename T>
void BSTree<T>::insert(NodeBT<T>* &node, T value){
    if(node == nullptr)    
        node = new NodeBT<T>(value);
    else if(value < node->data)
        insert(node->left, value);
    else 
        insert(node->right, value);    
}

template <typename T>
bool BSTree<T>::find(NodeBT<T>* node, T value){
    if(node == nullptr)
        return false;
    else if(value < node->data)
        return find(node->left, value);
    else if(value > node->data)
        return find(node->right, value);
    else return true;
}

#endif


