#include<iostream>
using namespace std ;
int maxwater(int height[],int n){
    int maxwater=0;
    for(int i=0;height < n;i++){
        for(int j=i=1;height<n;j++){
            int w=i-j;
            int ht=min(height[i],height[j]);
            int currentwater= ht*w;
            maxwater=min(maxwater,currentwater);

        }
    }
    return maxwater;
}
int main(){
    height[]={8,9,3,4,6,8,9,1};
    int n=8;
    cout<<"maxwater in container is"<<maxwater(height,n);
    return 0;
}