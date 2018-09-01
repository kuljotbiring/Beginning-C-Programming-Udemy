/*******************************************************************************
 * ** Author: Kuljot Biring
**
** Date:   July 31, 2018
**
**  THIS CHALLENGE IS SIMILAR TO SECTION 9 CHALLENGE EXCEPT YOU ARE TO USE
**  FUNCTIONS IN THIS PROGRAM!!!
**
**  This challenge is about using a collection (list) of integers and allowing
**  the user to select options from a menu to perform operations on the list.
**
**
**  Your program should display a menu options to the user as follows:
**
**  P - Print numbers
**  A - Add a number
**  M - Display mean of the numbers
**  S - Display the smallest number
**  L - Display the largest number
**  Q - Quit
**
**  Enter your choice:
**
** The program should only accept valid choices from the user, both upper and
** lowercase selections should be allowed.
** If an illegal choice is made, you should display, "Unknown selection, please
** try again" and the menu options should be displayed again.
**
** If the user enters 'P' or 'p', you should display all of the elements (ints) in
** the list. If the list is empty you should display "[] - the list is empty"
**
** If the list is not empty then all the list element should be displayed inside
** square brackets separated by a space. For example, [ 1 2 3 4 5 ]
**
**
** If the user enters 'A' or 'a' then you should prompt the user for an integer
** to add to the list which you will add to the list and then display it was added.
** For example, if the user enters 5 You should display, "5 added".
** Duplicate list entries are OK
**
** If the user enters 'M' or 'm'  you should calculate the mean or average of the
** elements in the list and display it. If the list is empty you should display,
** "Unable to calculate the mean - no data"
**
**
** If the user enters 'S' or 's' you should display the smallest element in the
** list. For example, if the list contains [2 4 5 1],  you should display, "The
** smallest number is 1"
** If the list is empty you should display, "Unable to determine the smallest
** number - list is empty"
**
** If the user enters 'L' or 'l' you should display the largest element in the
** list
** For example, if the list contains [2 4 5 1], you should display, "The largest
** number is 5"
** If the list is empty you should display, "Unable to determine the largest
** number - list is empty"
**
** If the user enters 'Q' or 'q' then you should display 'Goodbye" and the
** program should terminate.
**
** Before you begin. Write out the steps you need to take and decide in what
** order they should be done.
** Think about what loops you should use as well as what you will use for your
** selection logic.
**
** This exercise can be challenging! It may likely take a few attempts before
** you complete it -- that's OK!
**
** Finally, be sure to test your program as you go and at the end.
**
** Hint: Use a vector!
**
** Additional functionality if you wish to extend this program.
**
** - search for a number in the list and if found display the number of times it
** occurs in the list
** - clearing out the list (make it empty again) (Hint: the vector class has a
** .clear() method)
** - don't allow duplicate entries
** - come up with your own ideas!
**
** Good luck!
*********************************************************************************/
#include <iostream>
#include <vector>
#include <ctype.h>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

// function prototypes
void displayMenu();
void printNumbers(const vector <int> &v);
void addNumber(vector<int> &v);
void calcMean(const vector<int> &v);
void smallestNum(const vector<int> &v);
void largestNum(const vector<int> &v);
void quitProgram();
void dontKnow();

int main() {

    // declare variables and vector
    vector<int> numbers {};

    char selection {};

    do
    {
        // call function displaying menu
        displayMenu();

        cin >> selection;

        // use toupper function to make all letters capital
        selection = toupper(selection);

        // switch selection choices from menu
        switch (selection)
        {
            case 'P':
            {
                printNumbers(numbers);
            }
                break;

            case 'A':
            {
                addNumber(numbers);
            }
                break;

            case 'M':
            {
                calcMean(numbers);
            }
                break;

            case 'S':
            {
                smallestNum(numbers);
            }

                break;

            case 'L':
            {
                largestNum(numbers);
            }
                break;

            case 'Q':
            {
                quitProgram();
            }
                break;

            default:
            {
                dontKnow();
            }
        }

    }while(selection != 'q' && selection != 'Q');

    cout << endl;

    return 0;

}
/*************************************************************************
** Function that displays menu to the user
*************************************************************************/

void displayMenu()
{
    // Display menu
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

/*************************************************************************
** Function is called when user chooses p from the menu. Function displays
** the numbers in the vector.
*************************************************************************/

void printNumbers(const vector <int> &v)
{
    if (v.empty())    // function checking empty vector
        cout << "[] - the list is empty" << endl;
    else
    {
        cout << "[ ";
        for (auto num: v)
            cout << num << " ";
        cout << "]" << endl;
    }
}

/*************************************************************************
** Function called when user selects a from the menu. Function adds a
** number to the vector.
*************************************************************************/

void addNumber(vector<int> &v)
{
    int numAdd{};
    cout << "Enter an integer to add to the list: ";
    cin >> numAdd;
    v.push_back(numAdd);
    cout << numAdd << " added" << endl;
}

/*************************************************************************
** function is called when the user selects calculate the mean from the
** main menu. the function calculates the mean of the numbers in vector
*************************************************************************/

void calcMean(const vector<int> &v)
{
    if (v.empty())
        cout << "Unable to calculate mean - no data" << endl;
    else
    {
        int total{};
        for (auto num: v)
            total += num;
        cout << "The mean is : " << static_cast<double>(total) / v.size() << endl;
    }
}

/*************************************************************************
** Function is called when the user chooses s from the menu. Function
** outputs the smallest number in the vector
*************************************************************************/

void smallestNum(const vector<int> &v)
{
    if (v.empty())
        cout << "Unable to determine the smallest - list is empty" << endl;
    else
    {
        int smallest = v.at(0);
        for (auto num: v)
            if (num < smallest)
                smallest = num;
        cout << "The smallest number is: " << smallest << endl;
    }
}

/*************************************************************************
** Function is called when the user chooses l from the menu. Function
** outputs the largest number in the vector
*************************************************************************/

void largestNum(const vector<int> &v)
{
    if (v.empty())
        cout << "Unable to determine largest - list is empty" << endl;
    else
    {
        int largest = v.at(0);
        for (auto num: v)
            if (num > largest)
                largest = num;
        cout << "The largest number is: " << largest << endl;
    }
}

/*************************************************************************
** Function is called when user chooses q form the menu. Function prints
 * goodbye and exits program.
*************************************************************************/

void quitProgram()
{
    cout << "Goodbye" << endl;
}

/****************************************************************************
** Function is called when an unknown selection not part of the menu options
** is entered. It asks the user to re-enter the menu choice.
****************************************************************************/

void dontKnow()
{
    cout << "Unknown selection, please try again" << endl;
}
