/* Queue (Order Processing) */
#ifndef ORDER_PROCESSING_H
#define ORDER_PROCESSING_H
#include <queue>
#include <string>

class Order {
public:
    std::string item;
    int orderID;
    Order(std::string i, int id);
};

#endif