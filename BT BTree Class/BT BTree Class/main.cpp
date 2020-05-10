/*
 * Author: Steven Herrera
 * Project: BTree Class
 * Purpose: This is a binary tree which will can have multiple children
 *              it is still kept balanced and kept inorder
 *
 * Notes: delete funciton has not been implemented.
 *
 */

#include <iostream>
#include <cstdlib>
#include "BT-BTree.h"
#include "C:\Users\Steven_dev\Desktop\CS_Stuff\BTree-Functions\BTree-Functions\BTree-Functions\bTreeFunctions.h"

using namespace std;

int main()
{
    BTree<int> bt;
    string input = "";
    (srand(time(NULL)));
    while (true) {
        cout << "[R]andom  [I]nsert  [C]lear si[Z]e  [S]earch [E]rase  e[X]it: ";
        cin >> input;
        if (input == "r" || input == "R") {
            int num = (rand() % 100) + 1;
            cout << "-- Inserting " << num << "\nBTree : item: " << num << endl;
            bt.insert(num);
            bt.print_tree();
            cout << "\n\n=========================\n";
        } else if (input == "i" || input == "I") {
            int num = 0;
            cout << "? ";
            cin >> num;
            if (bt.insert(num)) {
                cout << "-- Inserting " << num << "\nBTree : item: " << num << endl;
            } else {
                cout << "could not insert " << num << endl;
            }            
            bt.print_tree();
            cout << "\n\n=========================\n";
        } else if (input == "s" || input == "S") {
            int num = 0;
            cout << "? ";
            cin >> num;
            if (bt.find(num)) {
                cout << "item is found. |" << bt.get(num) << "|\n";
            } else {
                cout << "Item not found.\n";
            }
            bt.print_tree();
            cout << "\n\n=========================\n";
        } else if (input == "c" || input == "C") {
            bt.clear_tree();
            bt.print_tree();
            cout << "\n\n=========================\n";
        } else if (input == "x" || input == "X") {
            break;
        } else if (input == "z" || input == "Z") {
            cout << "Size of BTree: " << bt.size() << endl;
            bt.print_tree();
            cout << "\n\n=========================\n";
        } else if (input == "e" || input == "E") {
            int num = 0;
            cout << "? ";
            cin >> num;
            if (bt.remove(num)) {
                cout << "-- Erasing " << num << "\nBTree : item: " << num << endl;
            } else {
                cout << "Cannot remove " << num <<" as it's not in the tree" << endl;
            }
            
            bt.print_tree();
            cout << "\n\n=========================\n";
        }
    }
    cout << "\n\n=========================\n";

    return 0;
}

