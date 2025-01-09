#include <iostream>
#include "Models/Order.h"
#include "../StaticLibrary1/Common.h"

using namespace std;

int main(int argc, char* argv[])
{
    Order o(12.4, 3);
    cout << "Hello world!\r\n" << o.GetTotalCost() << "\r\n" << Add(1, 3) << "\r\n";
    printf("Here\r\n");
    return 0;
}
