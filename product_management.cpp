/* BST (Product Management) */
#ifndef PRODUCT_MANAGEMENT_H
#define PRODUCT_MANAGEMENT_H
#include <string>

class Product {
public:
    std::string name;
    int price;
    Product* left;
    Product* right;
    Product(std::string n, int p);
};

class ProductBST {
public:
    Product* root;
    ProductBST();
    Product* insert(Product* root, std::string name, int price);
    void inOrder(Product* root);
};

#endif