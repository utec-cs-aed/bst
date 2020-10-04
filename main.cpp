#include <iostream>
#include <stdlib.h> 
#include "bst.h"
using namespace std;

int main(int argc, char const *argv[])
{
    BSTree<int> *bstree = new BSTree<int>();
    int n, val;
    cin >> n;
    int option = atoi(argv[1]);
    if (option >= 1 && option <= 15)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            bstree->insert(val);
        }
        switch (option)
        {
        case 1:
            bstree->displayInOrder();
            break;
        case 2:
            bstree->displayPreOrder();
            break;
        case 3:
            bstree->displayPostOrder();
            break;
        case 4:
            cout << bstree->height();
            break;
        case 5:
            cout << bstree->minValue();
            break;
        case 6:
            cout << bstree->maxValue();
            break;
        case 7:
            cout << bstree->isBalanced();
            break;
        case 8:
            cout << bstree->size();
            break;
        case 9:
            int ns = bstree->size();
            bstree->remove(bstree->minValue());
            bstree->remove(bstree->maxValue());
            cout << ns - bstree->size();
            break;
        case 10:
            cout << bstree->isFull();
            break;
        case 11:
            bstree->removeRepeats();
            bstree->displayInOrder();
            break;
        case 12:
            cout << bstree->predecessor(30);
            break;
        case 13:
            cout << bstree->successor(18);
            break;
        case 14:
            bstree->clear();
            cout << bstree->size();
            break;
        case 15:
            for (BSTree<int>::iterator ite = bstree->begin(); ite != bstree->end(); ++ite) {
                cout << *ite << endl;
            }
            break;    
        }
    }
    else if (option == 16)
    {
        int *array = new int[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];
        bstree->buildFromOrderedArray(array, n);
        cout << bstree->isBalanced();
    }
    else
    {
        cout << "option not found";
    }
}
