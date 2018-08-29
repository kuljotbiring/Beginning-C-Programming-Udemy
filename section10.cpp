/*********************************************************************
** Author: Kuljot Biring
**
** Date: August 28, 2018
**
** Create a C++ program that will be used in a digital library to
** format and sort journal entries based on the author's last name.
** Each entry has room to store only the last name of the author.
**
** Being by removing the first name "Isaac" from the string variable
** journal_entry_1 by using the string function erase. Do not forget
** to remove the whitespace. The string will then be "Newton".
**
** THe journal entries should be stored alphabetically based on the
** author's last name. Create and if statement so that if the last name
** contained withing journal_entry_2, is alphabetically less than the
** last name contained within journal_entry_2, then the string values
** are swapped using the string function swap.
*********************************************************************/

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using std::string;

int main() {
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0,6);

    if (journal_entry_2 < journal_entry_1)
        journal_entry_1.swap(journal_entry_2);

    std::cout << journal_entry_1 << std::endl;
    std::cout << journal_entry_2 << std::endl;

    return 0;
}
