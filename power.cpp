// #include<iostream>
// using namespace std ;

//     double pow(double x,int n){
//         if(n==0) return 1;
//         if(x==0)return 0;
//         if(x==1) return 1;
//         if(n==-1&&n%2==0) return 1.0;

//         if(n==-1&&n%2!=0)return -1.0;
//          long binaryform= n;
//          double ans = 1.0;

//          if(binaryform<0){
//             x=1/x;
//             binaryform=-binaryform;
//          }
//          while(binaryform>0){
//             if(binaryform%2==1){
//                 ans*=x;
//             }
//             x*=x;
//             binaryform/=2;
//          }
//           return ans;
//         }
        
//          int main (){
//             cout<<pow(2.0,5);
//              return 0;
//          }
         

    
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int maxProfit(int prices[], int n) {
//     int maxProfit = 0;
//     int bestBuy = prices[0];

//     for (int i = 1; i < n; i++) {
//         if (prices[i] > bestBuy) {
//             maxProfit = max(maxProfit, prices[i] - bestBuy);
//         }
//         bestBuy = min(bestBuy, prices[i]);
//     }

//     return maxProfit;
// }

// int main() {
//     int prices[] = {7, 1, 5, 3, 6, 4};
//     int n = 6;

//     cout << maxProfit(prices, n);
//     return 0;
// }
// #include<iostream>
// using namespace std ;
// int maxwater(int height[],int n){
//     int maxwater=0;
//     for(int i=0;i < n;i++){
//         for(int j=i=1;j<n;j++){
//             int w=j-1;
//             int ht=min(height[i],height[j]);
//             int currentwater= ht*w;
//             maxwater=max(maxwater,currentwater);

//         }
//     }
//     return maxwater;
// }
// int main(){
//    int   height[]={8,9,3,4,6,8,9,1};
//     int n=8;
//     cout<<"maxwater in container is"<<maxwater(height,n);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int maxwater(int height[],int n){
//     int lp=0;
//     int rp=n-1;
//     int maxwater=0;
//     while(lp<rp){
//         int w=rp-lp;
//         int l=min(height[rp],height[lp]);
//         int currentwater=w*l;
//         maxwater=max(maxwater,currentwater);
//         height[lp]<height[rp]?lp++:rp--;

//     }
//     return maxwater;
// }
// int main(){
//    int height[]={1,2,8,3,4,5,6,8,9,2};
//     int n=10;
//     cout<<"maxwater"<<maxwater(height,n);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int maxwater(int height[], int n){
//     int lp = 0;
//     int rp = n - 1;
//     int maxwater = 0;

//     while(lp < rp){
//         int w = rp - lp;
//         int h = min(height[lp], height[rp]);
//         int currentwater = w * h;

//         maxwater = max(maxwater, currentwater);

//         if(height[lp] < height[rp])
//             lp++;
//         else
//             rp--;
//     }
//     return maxwater;
// }

// int main(){
//     int height[] = {1,2,8,3,4,5,6,8,9,2};
//     int n = 10;

//     cout << "Max Area (Water) = " << maxwater(height, n);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>product(vector<int> num,int n){
//     vector<int>result(n,1)
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 num[i]*=num[j];
//             }
//         }
//     }
//     return result;
// }
// int main (){
//  vector<int> num = {1, 2, 3, 4};
//     int n = num.size();

//     vector<int> ans = product(num, n);

//     cout << "Product array: ";
//     for(int i = 0; i < n; i++){
//         cout << ans[i] << " ";
//     }

//     return 0;
// }