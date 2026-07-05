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