// #include<iostream>
// using namespace std;

// void bubblesort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j =0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// void printarray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main (){
//     int arr[]={4,1,5,2,3};
//     int n=5;
//      bubblesort(arr,n);
//      printarray(arr,n);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// void selectionsort(int arr[],int n){
//     for(int  i=0;i<n-1;i++){
//         int smallestindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestindex]){
//                 smallestindex=j;
//                 swap(arr[j],arr[smallestindex]);
//             }
//         }
//     }
// }
// void printarry(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[]={4,1,5,2,3};
//     int n=5;
//     selectionsort(arr,n);
//     printarry(arr,n);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// void insertionsort(int arr[],int n){
//     for(int i=1;i<n;i++){
//        int curr=arr[i];
//        int prev=i -1;
//        while(prev>=0 && arr[prev]>curr){
//         arr[prev+1]=arr[prev];
//         prev--;
//        } 
//        arr[prev+1]=curr;
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[]={4,1,5,2,3};
//     int n=5;
//     insertionsort(arr,n);
//     print(arr,n);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// void sort (int num[],int n){
//     int low=0;
//     int mid=0;
//     int high= n-1;
//     while(low<=high){
//         if(num[mid]==0){
//             swap(num[low],num[high]);
//             mid++;
//             low++;
//         }
//         elseif(num[mid]==1){
//             mid++;
//         }
//         else{
//             (num[mid],num[high]);
//             high--;
//         }
//     }
// }
// int main (){
//     int num[]={2, 0, 2, 1, 1, 0};
//     int n = sizeof(num) / sizeof(num[0]);

//      sort(num, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << num[i] << " ";
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

void merge(int A[], int B[], int m, int n) {
    int i = m - 1;
    int j = n - 1;
    int idx = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (A[i] >= B[j]) {
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }

    while (j >= 0) {
        A[idx--] = B[j--];
    }
}

int main() {
    int A[6] = {1, 3, 5, 0, 0, 0};
    int B[3] = {2, 4, 6};

    merge(A, B, 3, 3);

    for (int i = 0; i < 6; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
