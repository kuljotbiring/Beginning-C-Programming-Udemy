/*********************************************************************
** Author: Kuljot Biring
**
** Date: August 25, 2018
**
** Create a C++ program that asks the user for their favorite number
** between 1 and 100 then read this number from console.
*********************************************************************/

#include <iostream>

int main()
{
    // declare variables
    int userNumber;

    // prompt user for input
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> userNumber;

    std::cout << "Amazing!! That's my favorite number too!" << std::endl;

    // display user number with message
    std::cout << "No really!!, " << userNumber << " is my favorite number!" << std::endl;

    return 0;
}
