// #include<iostream>
// #include<vector>
// using namespace std ;
// int main (){
//     int n=7;
//     int array [7]={1,2,3,4,5,6,7};
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//                 cout<<array[i];
//             }
//             cout<<" ";
//         }
//         cout<<" "<<endl;
//     }
//     return 0;
// }

//sum of subarray
// #include<iostream>
// #include<vector>
// using namespace using ;
// int main (){
//     int n=7;
//     int array [7]={1,2,3,4,5,6,7};
//     int maxsum=INT_MAX;
//     for(int start=0;start<n;start++){
//         int Currentsum=0
//             for(int i=start;i<=end;i++){
//                 Currentsum+=array[end];

//                 maxsum(Currentsum,maxsum);
//             }
            
//         }
//         cout<<" max sum of array"<<maxsum;
        
//     return 0;
// }
 
//kadane alogorithm
// #

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairsum(vector<int>&num,target){
//     vector<int>ans;
//     int n=num.size()
//     for(int i=0;i<n;i++){
//         for(int j=1;j=i+1;j++){
//             if(arr[i]+arr[j]==target)
//             ans.pushback(i);
//             ans.pushback(j);
            
//         }
//     }
// return ans;
// }
// int main(){
//     vector<int>num={1,2,3,4,5,6,7};
//     int target=5;
//     cout<<"summ of subaary";
//     vector<int>ans=pairsum(num,target);
//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairsum(vector<int>& num, int target) {
//     vector<int> ans;
//     int n = num.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (num[i] + num[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;   // return first pair found
//             }
//         }
//     }
//     return ans;  // empty if no pair found
// }

// int main() {
//     vector<int> num = {1, 2, 3, 4, 5, 6, 7};
//     int target = 5;

//     vector<int> ans = pairsum(num, target);

//     if (!ans.empty()) {
//         cout << "Pair indices: " << ans[0] << " " << ans[1] << endl;
//     } else {
//         cout << "No pair found" << endl;
//     }

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int>pairsum(vector<int>num,target){
//   vector<int>ans;
//   int n= num.size()
//   int i=0;
//   int j=n-1;
//   while(i<j){
//     int pairsum=array[i]+array[j];
//     if(pairsum>target)
//     j--;{
//         elseif(pairsum>target){
//             i++;
//         } else{
//             ans.push_back(i);
//             ns.push_back(j);
//         }

//         }
//         return ans;
//     }
//   }
// return ans;
// }
// int main(){
//     vector<int>num={1,2,3,4,5,6};
//     int target=6;
//     vector<int>ans=pairsum(target,num);
//     return 0;
// }
// majority element
// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityel(vector<int>&num){
//     int freq =0;
//     int ans=0;
//     for(int i=0;i<num.size();i++){
//         if(freq==0){
//         ans=num[i];
//     }
//     if(ans==num[i]){
//         freq++;
//     }else{
//         freq--;
//     }
// }
// return ans; 
// }
// int main(){
//     vector<int>num={1,1,2,4,2,1,1,3,1};
//    cout<< majorityel(num);
//     return 0;
// }