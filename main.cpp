#include <iostream>
#include "bst.h"
using namespace std;

int main(int argc, char const *argv[]) {
    BSTree<int>* bstree = new BSTree<int>();
    int n, val;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        bstree->insert(val);
    }
    char option = argv[1][0];
    switch (option)
    {          
    case '1':
        bstree->displayInOrder();
        break;
    case '2':
        bstree->displayPreOrder();
        break;
    case '3':
        bstree->displayPostOrder();
        break;  
    case '4':
        cout<<bstree->height();
        break; 
    case '5':
        cout<<bstree->minValue();
        break;     
    case '6':
        cout<<bstree->maxValue();
        break;    
    case '7':
        cout<<bstree->isBalanced();
        break;            
    case '8':
        cout<<bstree->size();
        break; 
    case '9':
        int ns = bstree->size();
        bstree->remove(bstree->minValue());
        bstree->remove(bstree->maxValue());
        cout<<ns - bstree->size();
        break; 
    case '10':
        cout<<bstree->isFull();
        break;
    case '11':        
        bstree->removeRepeats();
        bstree->displayInOrder();
        break;   
    case '12':        
        cout<<bstree->predecessor(30);        
        break;      
    case '13':        
        cout<<bstree->successor(18);        
        break;          
    default:
        cout<<"option not found";
        break;
    }    
}
