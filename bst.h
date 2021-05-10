#ifndef BSTREE_H
#define BSTREE_H

#include "iterator.h"

using namespace std;

template <typename T>
class BSTree {
    public:
        typedef BSTIterator<T> iterator;  

    private:
        NodeBT<T>* root;    

    public:
        BSTree(): root(nullptr) {}

        // TODO: PART 1  
		void insert(T value);	
		bool find(T value);		
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
        bool isFull(); //es aquel en el que todos los nodos tienen 0 o 2 hijos
        void removeRepeats(); // remover repetidos
        T successor(T value); // Retornar el valor siguiente de "value" en el arbol
        T predecessor(T value); // Retornar el valor anterior de "value" en el arbol
        void clear(); // Liberar todos los nodos (usar root->KillSelf)
        void buildFromOrderedArray(T *array, int n); //dado un array ordenado construir un arbol binario balanceado
        void displayBFS();// Recorrido en anchura (BreadthFirstSearch)
        void displayDFS();// Recorrido en profundidad (DepthFirstSearch)
        iterator begin();// Retorna el inicio del iterador             
        iterator end();// Retorna el final del iterador
        ~BSTree(); //Destructor del arbol

}; 


#endif


