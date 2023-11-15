//ADMISSION NUMBER:171674
//DBIT SEP-DEC 2023
//STRATHMORE UNIVERSITY
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (!isalpha(letter)) {
        cout << "Error: input is not a letter.\n";
        return 1;
    }

    letter = tolower(letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        cout << "The letter '" << letter << "' is a vowel.\n";
    } else {
        cout << "The letter '" << letter << "' is a consonant.\n";
    }

    return 0;
}