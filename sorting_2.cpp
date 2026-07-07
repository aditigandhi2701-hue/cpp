class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            // Find the smallest element in the unsorted part
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the smallest element with the current element
            swap(nums[i], nums[minIndex]);
        }

        return nums;
    }
};
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {

            // Compare adjacent elements
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
    }
};