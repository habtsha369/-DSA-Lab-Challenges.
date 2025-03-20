#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find the first non-repeating character's index
int firstUniqChar(string s) {
    unordered_map<char, int> freq; // Hash map to store frequency of characters
    // Count the occurrences of each character
    for (char c : s) {
        freq[c]++;
    }
    for (int i = 0; i < s.size(); i++) {  // Find the first character with frequency 1
        if (freq[s[i]] == 1) { // If character appears only once
            return i; // Return its index
        }
    }
    return -1; // Return -1 if no unique character is found
}
int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s; // Input string from user

    int result = firstUniqChar(s); // Find the index of first unique character

    cout << "First non-repeating character index: " << result << endl; // Output the result

    return 0;
}

