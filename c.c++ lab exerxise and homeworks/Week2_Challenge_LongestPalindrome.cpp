#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int longestPalindrome(string s) {
    unordered_map<char, int> freq_map;
    int palindrome_length = 0;
    bool odd_found = false;

    // Count the frequency of each character
    for (char c : s) {
        freq_map[c]++;
    }

    // Check the frequencies of each character
    for (auto& pair : freq_map) {
        if (pair.second % 2 == 0) {
            // Add even counts directly to the palindrome length
            palindrome_length += pair.second;
        } else {
            // Add the largest even number less than the odd count
            palindrome_length += pair.second - 1;
            odd_found = true; // We can place one character in the center
        }
    }

    // If there's at least one odd count, we can add one character in the center
    if (odd_found) {
        palindrome_length += 1;
    }

    return palindrome_length;
}

int main() {
    string s;

    // Input string
    cout << "Enter the string: ";
    cin >> s;

    // Output the result
    cout << "Length of longest palindrome that can be built: " << longestPalindrome(s) << endl;

    return 0;
}

