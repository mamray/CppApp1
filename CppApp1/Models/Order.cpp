#include "Order.h"

//Order class implementation
Order::Order()
{
    this->Price = 0;
    this->Count = 0;
}
Order::Order(float price, int count)
{
    this->Price = price;
    this->Count = count;
}

float Order::GetTotalCost()
{
    return this->Price * this->Count;
}


