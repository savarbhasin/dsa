#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,2,3,4,5};
    int s=0, e=5-1;
    int ans;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == 2){
            ans = mid;
            e=mid-1; // checks again in left part of array
        }
        else if(arr[mid]>2){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    int ans1;
    s=0;
    e=5-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == 2){
            ans1 = mid;
            s=mid+1; // checks again in left part of array
        }
        else if(arr[mid]>2){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    cout<<ans<<ans1<<endl;
    return 0;
}