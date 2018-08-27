/************************************************************************
** Author: Kuljot Biring
**
** Date: August 25, 2018
**
** Write a program that asks the user to enter an integer representing
** the number of cents (assume user will enter >= 0). The program should
** display how to provide that change to the user.
************************************************************************/

#include <iostream>

int main()
{
    //create constants to hold known unchanging values for currency
    const int   DOLLAR_VALUE = 100,
                QUARTER_VALUE = 25,
                DIME_VALUE = 10,
                NICKEL_VALUE = 5,
                PENNY_VALUE = 1;

    int    cents,
           dollarNumber,
           quarterNumber,
           dimeNumber,
           nickelNumber,
           pennyNumber;

    //prompt user to enter cents greater than 0
    std::cout << "Please enter an amount in cents greater or equal to 0." << std::endl;
    std::cin >> cents;

    //integer divide to get whole numbers of number of change.
    //modulus for getting remaining change after division

    dollarNumber = cents / DOLLAR_VALUE;    // get number of dollars
    cents %= DOLLAR_VALUE;                  // get remaining change

    quarterNumber = cents / QUARTER_VALUE;  //get number of quarters
    cents %= QUARTER_VALUE;                 //get remaining change

    dimeNumber = cents / DIME_VALUE;        //get number of dimes
    cents %= DIME_VALUE;                    //get remaining change

    nickelNumber = cents / NICKEL_VALUE;    //get number of nickels
    cents %= NICKEL_VALUE;                  //get remaining change

    pennyNumber = cents / PENNY_VALUE;      //get pennies (all change leftovers used up)

    //display currency
    std::cout << "Your change will be:" << std::endl;
    std::cout << "$: " << dollarNumber << std::endl;
    std::cout << "Q: " << quarterNumber << std::endl;
    std::cout << "D: " << dimeNumber << std::endl;
    std::cout << "N: " << nickelNumber << std::endl;
    std::cout << "P: " << pennyNumber << std::endl;

    return 0;
}
