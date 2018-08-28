/*********************************************************************
** Author: Kuljot Biring
**
** Date:   July 28, 2018
**
**  Given a vector of integers named vec, find the sum of the of the
** product of all pairs. For example, given vector vec to be {1,2,3},
** the possible pairs are (1,2), (1,3), and (2,3). So the result would be
** (1*2) + (1*3) + (2*3) which is 11. If the vector is empty or has
** only 1 element, then the result should be 0;
*********************************************************************/

#include <iostream>
#include <vector>

using std::vector;

// function prototype
int calculate_pairs(vector<int> vec);

int main()
{
    // declare and initialize vector of ints
    vector<int> vec {2,4,6,8};

    // display result by calling function
    std::cout << "Result: " << calculate_pairs(vec);

    return 0;
}

/****************************************************
** This function sums the products of all pairs of
** a given vector and returns the result.
****************************************************/

int calculate_pairs(vector<int> vec)
{
    int result{};

    for (int i{}; i < vec.size(); i++)
    {
        for (int j{i + 1}; j< vec.size(); j++)
        {
            result += vec.at(i) * vec.at(j);
        }
    }

    return result;
}
