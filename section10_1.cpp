/********************************************************************************
** ** Author: Kuljot Biring
**
** Date: August 28, 2018
**
** A simple and very old method of sending secret messages is the substitution cipher.
** You might have used this cipher with your friends when you were a kid.
** Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
** For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
**
** Write a program that's ask a user to enter a secret message.
**
** Encrypt this message using the substitution cipher and display the encrypted message.
** Then decrypted the encrypted message back to the original message.
**
** You may use the 2 strings below for  your substitution.
** For example, to encrypt you can replace the character at position n in alphabet
** with the character at position n in key.
**
** To decrypt you can replace the character at position n in key
** with the character at position n in alphabet.
**
** Have fun! And make the cipher stronger if you wish!
** Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so
** forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
** This could also be improved.
**
** Remember, the less code you write the less code you have to test!
** Reuse existing functionality in libraries and in the std::string class!
*********************************************************************************/

#include <iostream>
#include <string>

using std::string;

int main() {

    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRS"
                     "TUVWXYZ1234567890!@#$%^&*()_+,./;'[]\\<>?:{}|-="};
    string key  {" [ZXCVBNM,./';LKJHGFDSRAQWETYUIOP[]\\=-0987654321!@"
                 "#$%^&*()_+|}{:?><zaqxwcdevfrtgbnhyujmklsiop"};
    string secret_message {};
    string encrypted_message {};
    string decrypted_message {};

    std::cout << "Enter the secret message : \n";

    getline(std::cin, secret_message);

    // use for loop to iterate through message
    for (char x: secret_message)
    {
        // use find function to get position of letter
        size_t position = alphabet.find(x);

        // if the letter found
        if (position != string::npos)
        {
            char new_char{key.at(position)};

            encrypted_message += new_char;
        }
        else // if not found add character to string
        {
            encrypted_message += x;
        }
    }
    std::cout << "Message now encrypted : " << encrypted_message << std::endl;

    // loop through encrypted message
    for (char x: encrypted_message)
    {
        // use key to find character
        size_t position = key.find(x);

        // if the letter found
        if (position != string::npos)
        {
            char new_char { alphabet.at(position) };

            decrypted_message += new_char;
        }
        else // if not found add character to string
        {
            decrypted_message += x;
        }
    }

    std::cout << "\nOriginal message decrypted: " << decrypted_message << std::endl;

    std::cout << std::endl;

    return 0;
}
