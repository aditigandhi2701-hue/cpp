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