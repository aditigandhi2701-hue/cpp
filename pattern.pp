// pattern 11
class Solution {
public:
    void pattern11(int n) {
        for(int i = 1; i <= n; i++) {

            int start;
            if(i % 2 == 0)
                start = 0;
            else
                start = 1;

            for(int j = 1; j <= i; j++) {
                cout << start << " ";
                start = 1 - start;   // Toggle between 0 and 1
            }

            cout << endl;
        }
    }
};

// Pattern 12 
class Solution {
public:
    void pattern12(int n) {
        int spaces = 2 * (n - 1);

        for(int i = 1; i <= n; i++) {

            // Left numbers
            for(int j = 1; j <= i; j++) {
                cout << j;
            }

            // Middle spaces
            for(int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            // Right numbers
            for(int j = i; j >= 1; j--) {
                cout << j;
            }

            cout << endl;

            // Decrease spaces by 2 for the next row
            spaces -= 2;
        }
    }
};

// Pattern 13
class Solution {
public:
    void pattern13(int n) {
        int num = 1;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
};

// pattern 14
class Solution {
public:
    void pattern14(int n) {
        for(int i = 1; i <= n; i++) {
            for(char ch = 'A'; ch < 'A' + i; ch++) {
                cout << ch;
            }
            cout << endl;
        }
    }
};

// pattern 15
class Solution {
public:
    void pattern15(int n) {
        for(int i = n; i >= 1; i--) {
            for(char ch = 'A'; ch < 'A' + i; ch++) {
                cout << ch;
            }
            cout << endl;
        }
    }
};

// pattern 16
class Solution {
public:
    void pattern16(int n) {
        for(int i = 0; i < n; i++) {
            char ch = 'A' + i;

            for(int j = 0; j <= i; j++) {
                cout << ch;
            }

            cout << endl;
        }
    }
};

// pattern 17
class Solution {
public:
    void pattern17(int n) {
        for(int i = 0; i < n; i++) {

            // Print spaces
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            // Print increasing characters
            char ch = 'A';
            for(int j = 0; j <= i; j++) {
                cout << ch;
                ch++;
            }

            // Print decreasing characters
            ch -= 2;
            for(int j = 0; j < i; j++) {
                cout << ch;
                ch--;
            }

            cout << endl;
        }
    }
};

// pattern 18
class Solution {
public:
    void pattern18(int n) {
        for(int i = 0; i < n; i++) {

            for(char ch = 'A' + (n - i - 1); ch <= 'A' + n - 1; ch++) {
                cout << ch << " ";
            }

            cout << endl;
        }
    }
};
