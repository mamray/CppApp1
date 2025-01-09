#pragma once

class Order
{
public:
    int OrderId;
    float Price;
    int Count;
    Order();
    Order(float price, int count);
    float GetTotalCost();
};
