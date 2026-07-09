class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }

        return largest;
    }
};
int largest = INT_MIN;
int secondLargest = INT_MIN;

for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > largest) {
        secondLargest = largest;
        largest = nums[i];
    }
    else if (nums[i] > secondLargest && nums[i] != largest) {
        secondLargest = nums[i];
    }
}
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;      // Target found
            }
        }
        return -1;             // Target not found
    }
};
class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
};