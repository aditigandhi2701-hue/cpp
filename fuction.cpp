// #include<iostream>
// using namespace std;
// void printhello(){
//     cout<<"hello";

// }
// int main (){
//     printhello();
    
// return 0;
// }
// #include<iostream>
// using namespace std;
// int sum(int a ,int b){
//     int s = a+b;
//     return s;
// }
// int main(){
//     cout<<sum(8,9);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int minofnum(int a ,int b){
    
//     if(a<b){
//     return a;}
//     else{
//     return b;}
// }
// int main(){
//     cout<<minofnum(8,9);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int sumn(int n){
//    int sum=0;
//     for(int i=1;i<n;i++){
//         sum+=i;
//         return sum;
//     }
// }
// int main(){
//     cout<<sumn(8);
//     return 0;
// }
// #include<iostream>
//  using namespace std;
// int factN(int n){
//     int fact=1

//      for(int i=1;i<=n;i++){
//         fact=fact*i
       
//         return fact;
//     }
// }
// int main(){
//     cout<<factN(8);
//     return 0;
// #inlude<iostream>
// using namespace std;
//  bool isprime(int n){
//    if(n<=1){
//       return false;
//    }
//    else{
//       for(int i=2;i<n;i++){
//          return false;
         
            
//       }
//       return true;
//          }
//    }

// int main(){
//    int num;
//      cout<<"the no is";
//      cin>>num;
//      if(isprime(num)){
//          cout<<"the no is prime";

//     }else{
//       cout<<"id not prime";
//    }
   
// }
// #include<iostream>
// using namespace std;
// int reverse(int n){
//    int rev =0;
//    while(n!=0){
//    rev =rev*10+n%10
//    n/=10
//    }
//    return rev;
// }
// int main(){
//    int num;
//    cout<<"enter a numner";
//    cin>>num;
//    reverse(num);
//    return 0;
// }
// #include<iostream>
// using namespace std;
// bool palindrome(int n){
//    int oringal =n;
//    int rev=0;
//    while(n!=0){
//       rev=rev*10+n%10;
//       n/= 10;

//    }
//    return oringal =rev;
// }
// int main(){
//    int num;
//    cout<<"enter a num";
//    cin >>num;
//    if(palindrome(num)){
//       cout<<"is  palindrome";
   
//    }
//     else{
//       cout<<" not palindromme";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int sumofdigts(int n){
   int sum=0;
   while(n!=0){
      sum+=n%10;
      n/=10;
   
   }
   return sum;

}
int main(){
   int num;
   cout<<"enter a num";
   cin>>num;
  cout<< sumofdigts(num);
   return 0;
}