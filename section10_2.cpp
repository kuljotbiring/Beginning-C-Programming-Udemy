/*********************************************************************
** Author: Kuljot Biring
**
** Date: August 28, 2018
**
** Write a C++ program that displays a Letter Pyramid from a
** user-provided std::string.
** Prompt the user to enter a std::string and then from that string
** display a Letter Pyramid as follows:
**
** It's much easier to understand the Letter Pyramid given examples.
**
** If the user enters the string "ABC", then your program should display:
**
**      A
**     ABA
**    ABCBA
*********************************************************************/

#include <iostream>

#include <string>

int main()

{
    std::string yourString{},
            reverseString{};

    std::cout << "Enter a string to construct the pyramid: \n";

    getline(std::cin, yourString);

    for(size_t pos {0}; pos < yourString.length(); ++pos)
    {
        std::string spaces (yourString.length() - pos,' ');

        std::cout << spaces << yourString.substr(0, pos + 1) << reverseString << std::endl;

        reverseString = yourString.at(pos) + reverseString;
    }

    return 0;
}
