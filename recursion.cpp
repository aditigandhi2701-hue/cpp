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