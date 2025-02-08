/* Main Function (Integration) */
#include "authentication.h"
#include "product_management.h"
#include "order_processing.h"
#include "delivery_system.h"
#include <iostream>

using namespace std;

int main() {
    Trie userTrie;
    userTrie.insert("shailesh");
    userTrie.insert("arti");
    cout << "Username exists? " << userTrie.search("shailesh") << endl;

    ProductBST bst;
    bst.root = bst.insert(bst.root, "Laptop", 50000);
    bst.root = bst.insert(bst.root, "Phone", 20000);
    bst.inOrder(bst.root);

    queue<Order> orderQueue;
    orderQueue.push(Order("Laptop", 1));
    orderQueue.push(Order("Phone", 2));
    while (!orderQueue.empty()) {
        Order current = orderQueue.front();
        cout << "Processing Order: " << current.orderID << " - " << current.item << endl;
        orderQueue.pop();
    }

    Graph g(5);
    g.addEdge(0, 1, 10);
    g.addEdge(1, 2, 5);
    g.dijkstra(0);
    
    return 0;
}
