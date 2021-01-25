// HW_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void func()
{
    std::cout << "Enter N: ";
    int n;
    std::cin >> n;

    std::cout << "Even or not(use 0 or 1): ";
    int Even;
    std::cin >> Even;



    for (int i = Even; i < n; i += 2)
    {
        std::cout << i;
    }
    
}

int main()
{
    func();
}

