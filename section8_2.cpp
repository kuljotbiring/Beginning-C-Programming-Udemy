/*********************************************************************
** Author:  Kuljot Biring
**
** Date:    August 26, 2018
**
** Practice with boolalpha that sets 1 to true and 0 to false;
*********************************************************************/
#include <iostream>

int main() {
    bool answer1 {false};   // declare & initialize variables to false
    bool answer2 {false};

    answer1 = (100 == 50+50);
    answer2 = (1 == 2);

    // boolalpha sets 1 to true and 0 to false
    std::cout << std::boolalpha << std::endl;

    std::cout << answer1 << std::endl; // 1 changed to true
    std::cout << answer2 << std::endl; // 0 changed to false

    return 0;
}
