/* 
 * File:   bintreetest.cpp
 * Author: jakeday
 *
 * Created on June 6, 2017, 2:36 PM
 */

#include <cstdlib>
#include <iostream>
#include "bintree.h"

void print_data(int data) {
    std::cout << data << " ";
}

using namespace coen70_lab9;

int main() {
    binary_tree_node<int> *root = new binary_tree_node<int>(1,NULL,NULL);
    
    root->set_left(new binary_tree_node<int>(2,NULL,NULL));
    root->left()->set_left(new binary_tree_node<int>(3,NULL,NULL));
    root->set_right(new binary_tree_node<int>(4,NULL,NULL));
    root->right()->set_right(new binary_tree_node<int>(5,NULL,NULL));

    //Left, Root, Right
    std::cout << "inorder: ";
    inorder(print_data,root);
    
    // Root, Left, Right
    std::cout << "\npreorder: ";
    preorder(print_data,root);
    
    //Left, Right, Root
    std::cout << "\npostorder: ";
    postorder(print_data,root);
    
    //Size
    std::cout << "\nSize: " << tree_size(root) << std::endl;
    
    //Print
    print(root,2);
    
    //Copy
    std::cout << "Copying..." << std::endl;
    binary_tree_node<int> *tCopy = tree_copy(root);
    
    std::cout << "inorder: ";
    inorder(print_data,tCopy);
    
    std::cout << "\npreorder: ";
    preorder(print_data,tCopy);
    
    std::cout << "\npostorder: ";
    postorder(print_data,tCopy);
    
    std::cout << "\nSize: " << tree_size(tCopy) << std::endl;
    
    print(tCopy,2);
    
    //Deallocate
    tree_clear(root);
    tree_clear(tCopy);
}

