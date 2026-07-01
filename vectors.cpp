// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector <int> vec ={1,2,3};
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i];
//     }
//     return 0;
// }
// 
// #include<iostream>
// #include<vector>
// using namespace  std;
// int main(){
//     vector<int>v={1,2,3};
//     cout<<"size"<<v.size();
//     return 0;

// }
// #include<iostream>
// #include<vector>
// using namespace  std;
// int main(){
//     vector<int>v={1,2,3,8};
//     int even=0;
//     int odd=0;
//     for(int val:v){
//         if(%2==o){
//             even++;
//         }
//         else{
//             odd++
//         }
//         cout<<"even"<<even;
//         cout<<"odd"<<odd;
//     }
//     return 0;

// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={1,2,3,4};
//     int max=v[i];
//     for(int i;i<v.size();i++){
//         if(max<v[i]){
//          max=v[i];

        
//     }
//     cout<<"max"<<max;
//     return 0;
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;={1,2,3,4,5};
//     for(int i-v.size();i>=0;i--){
//     cout<<v[i]<<"";
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     int x;
//     for(int i;i<5;i++){

//         cin>>x;
//         v.push_back(x);
//     }
//     for(int val:v){
//         cout<<val;
//     }
//     return 0;


// #include<iostream>
// #include<vector>
// using namespace std;
// int sumVector(vector<int>i){
//     int sum=0;
// (intx:v)
// sum+=x;
// return sum;
// }
// int main (){
//     vector<int>v={5,9,8};
//     cout<<"sum of vector";
//     int sumVector(x);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={1, 2,3,4,5};
    
//     for(int i=0;i<v.size();i--){
//         if(v[i]%2==0){
//            v.erase( v.begin()+i);
//            i--;
//         }
//     }
//    for(int x:v)
//    cout<<"easrse even no"<<x;
    
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vetor<int>v={1,2,3,4};
//     cout<<"first no"<<v.front();
//     cout<<"end no"<<v.back();
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     if(v.empty()){
//         cout<<"is empty"
//     }else{
//         cout<<"is not empty"
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v={1,2,3,4,5};
//     v.insert(v.begin(),2,3);
//     (int x:v)
//     cout<<x;
//     return 0;
// }
//    #include <iostream>
// #include <vector>
// using namespace std;

// int majorityElement(vector<int>& num) {
//     int n = num.size();

//     for (int val : num) {
//         int freq = 0;

//         for (int el : num) {
//             if (el == val) {
//                 freq++;
//             }
//         }

//         if (freq > n / 2) {
//             return val;
//         }
//     }
//     return -1; // if no majority element
// }

// int main() {
//     vector<int> num = {2, 2, 1, 1, 2, 2, 2};

//     cout << "Majority Element: "
//          << majorityElement(num) << endl;

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
vector<int>majorityel(vector<int>&num){
    int freq =0;
    int ans=0;
    for(int i=0;i<num.size();i++){
        if(freq==0){
        ans=num[i];
    }
    if(ans==num[i]){
        freq++;
    }else{
        freq--;
    }return ans ;
}
int main(){
    vector<int>num={1,1,2,4,2,1,1,3,1};
    majorityel(num);
}