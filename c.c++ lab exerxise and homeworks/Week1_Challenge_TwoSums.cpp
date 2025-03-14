 #include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // Stores number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // Return the indices
            }
            num_map[nums[i]] = i; // Store the number and its index
        }
        return {}; // Return empty if no solution found
    }
};

int main() {5
    solution solver;
    int n, target;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<int> result = solver.twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
    
    return 0;
}