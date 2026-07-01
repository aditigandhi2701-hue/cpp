// #include<iostream>
// using namespace std ;
// int main(){
// int marks[5]={1,2,3,4,4};

// cout<<"marks"<<marks[3];
// return 0;
// }
// #include<iostream>
// using namespace std ;
// int main(){
//     int size=5;
//     int marks[size];
//     for(int i=0;size>i;i++){
//       cin>>marks[i];}
// return 0;
// }
// 
//  #include<iostream>
//  using namespace std ;
//  int main(){
//   int size;
//   cout<<"enter a size";
//   cin>>size;
//    int marks[size];
//    for(int i=0;size>i;i++){
//      cin>>marks [i];
//    }
//    for(int i=0;size>i;i++){
//      cout>>marks[i];
//    }
//    int smallest=INT_MAX;
//    for(int i=0;size>i;i++){
//      if( marks[i]<smallest){
//         smallest=marks[i];
//      }
//      cout<<"smallest no"<<smallest;
//    }

   
   
//  return 0;
//  }
 
// #include<iostream>
// using namespace std;
// int main(){
//     int num[]={1,2,3,4,5};
//     int size=5
//     int small=INT_MAX;
//     int big= INT_MIN;
//     for(int i=0;i<size;i++){
//         small=min(num[i],small);
//         big=max(num[i],big);

//     }
//     cout<<"largest"<<big;
//     cout<<"smallest"<<small;
//     return 0;
// }

// #include <iostream>
// #include <climits>
// #include <algorithm>

// using namespace std;

// int main() {
//     int num[] = {1, 2, 3, 4, 5};
//     int size = 5;

//     int small = INT_MAX;
//     int big = INT_MIN;
//  int bigindex=-1;
//  int smallindex=-1;
//     for (int i = 0; i < size; i++) {
//         small = min(num[i], small);
//         bigindex=i;
//         big = max(num[i], big);
//         smallindex=i;
//     }

//     cout << "Largest: " << big <<bigindex<< endl;
//     cout << "Smallest: " << small <<smallindex; endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int linearsearch(int arr[],int size,int target){
// for(int i=0;i<size;i++){
//    if(arr[i]==target){;
//     return i;
// }
// }

// return -1
// };
// int main(){
//     int arr[]={1 ,3,5,6,7,8};
//     int size=6;
//     int target=3

//     cout<<linearsearch(arr,size,target);
//     return 0;
// }
// 
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4,5};
//     int size=5;
//     int sum;
//     sum =array[0]+array[2];
//     cout<<"sum of num"<<sum;
//     return 0;
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,3,4,5};
//     int size=5;
//     int sum=0;
//     for(int i =0;i<size;i++){
//         sum+=array[i];
//     }
//     cout<<"sum of num"<<sum;
//     return 0;
// }
// 

//    return 0;
//  }
// #include<iostream>
// using namespace std;
//  int main(){
//      int array[]={1,2,3,4,5};
//      int size=5;
//      cout<<"even no ";
//      for(int i=0;i<size;i++){
//         if(array[i]%2==0){
//             cout<<array[i];
//         }
//      }
//      cout<<"odd no ";
//      for(int i=0;i<size;i++){
//         if(array[i]%2!=0){
//             cout<<array[i];
//         }
//      }
//      return 0;
//     }
    //  #include<iostream>
    //  using namespace std;
    //  void array(int  arr[],int size){
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i];
    //  }  
    //  }
     
    //  int main(){
    //     int arr[]={1,2,3,4,5};
    //     int size=5;
    //     array(arr,size);
    //     return 0;
    //  }
    // #include <iostream>
    // using namespace std;
    // int main () {
    //     int size = 5 ;
    //     int marks [size] ;

    //     for (int i = 0 ;i<size ;i++){
    //     cin >> marks[i] ;
    //     }

    //     for (int i = 0 ; i<size ; i++ ){
    //         cout << marks[i];
    //     }
    //     return 0 ;

    // }
    // #include <iostream>
    // using namespace std ;
    
    // int linearsearch ( int marks , int sz , int target){
    //     for ( int i = 0 ; i < sz ; i ++){
    //         if (marks[i] == target ){
    //             return i ;
    //         }
    //     }
    //     return -1 ; 
    // }
    // int main (){
    //     int marks [] = {2 ,5,8,7,9} ;
    //     int sz = 5 ;
    //     int target = 8 ;

    //     cout << linearsearch (marks , sz , target)<< endl ;
    //     return 0 ; 
    // }
    #include<iostream>
    using namespace std ;
    
   int reveresearray ( int array[] , int sz  ){ 
    int start = 0 ;
    int end = sz -1 ;
    while (start < end ){
        swap (array[start] , array [end]);
        start ++ ;
        end -- ;
    
    }
   }
   int main (){
    int array[] = {5,4,3,2,1}
    int sz = 5;
    reveresearray (array , sz )
    for (int i = 0 ; i<sz ; i++){
        cout << array[i] << " " ;
    }
    cout << endl;
    return  0;
  }