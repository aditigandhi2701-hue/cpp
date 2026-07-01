// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[2][3]={{2,3,6},{4,5,5}};
//     cout<<matrix[1][2];
//     return 0 ;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int matrix[2][3];
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cin>>matrix[i][j];
//     }
// }

// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout<<matrix[i][j];
//     } 
//  cout<<endl;
//     }
   
// return 0;
// }
// #include<iostream>
// using namespace std;
// bool linearsearch (int  matrix[2][3],int key,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==key){

//             return true;
//         }
//     }
    
// }
// return false;
// }
//     int main(){
//         int matrix[2][3]={{1,6,9},{2,3,4}};
//         int n=2;
//         int m=3;
//         int key =4;
//         cout<<linearsearch(matrix,n,m,key);
    
// return 0;
// }
// #include<iostream>
// using namespace std;
// void linearsearch (int  matrix[2][3],int key,int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==key){
//                 cout<<"found a index"<<i<<j;

//             return ;
//         }
//     }
    
// }
// cout<<" not found";
// }
//     int main(){
//         int matrix[2][3]={{1,6,9},{2,3,4}};
//         int n=2;
//         int m=3;
//         int key =4;
//         cout<<linearsearch(matrix,n,m,key);
    
// return 0;
// }
// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;

// int getmaxsum(int matrix[][3], int n, int m) {
//     int maxsumrow = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         int rowsum = 0;

//         for(int j = 0; j < m; j++) {
//             rowsum += matrix[i][j];
//         }

//         maxsumrow = max(rowsum, maxsumrow);
//     }

//     return maxsumrow;
// }

// int main() {
//     int matrix[2][3] = {{1,2,3},{5,6,7}};
//     int n = 2;
//     int m = 3;

//     cout << "Max sum = " << getmaxsum(matrix, n, m);

//     return 0;
// }
// 
#include<iostream>
using namespace std;
bool linearsearchrow (int mat[2][3],int n,int row,int target){
    int st=0;
    int end=n-1;
    while(st<=end){
        
        int mid = st + (end - st) / 2;

        if(target == mat[row][mid]) {
            return true;
        }
        else if(target > mat[row][mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return false;
}
    bool searchMatrix(int mat[][4], int m, int n, int target) {

    int startRow = 0, endRow = m - 1;

    while(startRow <= endRow) {

        int midRow = startRow + (endRow - startRow) / 2;

        if(target >= mat[midRow][0] && target <= mat[midRow][n-1]) {
            return searchInRow(mat, midRow, n, target);
        }
        else if(target > mat[midRow][n-1]) {
            startRow = midRow + 1;   // go down
        }
        else {
            endRow = midRow - 1;     // go up
        }
    }

    return false;
}

int main() {

    int matrix[4][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        {65, 70, 75, 80}
    };

    int m = 4, n = 4;
    int target = 16;

    if(searchMatrix(matrix, m, n, target))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
    