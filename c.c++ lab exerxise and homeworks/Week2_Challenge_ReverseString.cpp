#include <iostream>
#include <vector>
using namespace std;

 
void reverseString(vector<char>& s) {    // Function that reverse the string
    int left = 0, right = s.size() - 1;
    while (left < right) {
        swap(s[left], s[right]);   // Swap characters
        left++;
        right--;
    }
}

int main() {
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    
    vector<char> s(n);
    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    reverseString(s);
    
    cout << "Reversed string: ";  // Create a vector of size n to store the characters
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}
