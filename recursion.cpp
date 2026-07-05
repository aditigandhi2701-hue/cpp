class Solution {
  public:
    void printNumbers(int n) {
        if(n==1){
            cout<<1<<endl;
            return;
        }
        printNumbers(n-1);
        cout<<n<<endl;
    }
};
class Solution {
public:
    void printNos(int n) {

        // Base case
        if (n == 0)
            return;

        // Print first
        cout << n << endl;

        // Recursive call
        printNos(n - 1);
    }
};
class Solution {
public:
    int factorial(int n) {

        // Base case
        if (n == 0)
            return 1;

        // Recursive case
        return n * factorial(n - 1);
    }
};
class Solution {
public:
    void reverseArray(vector<int> &arr, int left, int right) {

        // Base case
        if (left >= right)
            return;

        // Swap
        swap(arr[left], arr[right]);

        // Recursive call
        reverseArray(arr, left + 1, right - 1);
    }
};
class Solution {
public:
    bool isPalindrome(string &s, int left, int right) {

        // Base case
        if (left >= right)
            return true;

        // Characters don't match
        if (s[left] != s[right])
            return false;

        // Recursive call
        return isPalindrome(s, left + 1, right - 1);
    }
};
class Solution {
public:
    int fibonacci(int n) {

        // Base cases
        if (n == 0)
            return 0;

        if (n == 1)
            return 1;

        // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};