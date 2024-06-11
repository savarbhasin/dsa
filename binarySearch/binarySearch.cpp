#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int x = 5;
    int l,h=5;
    while(l<=h){
        int mid = (l+h)/2;
        if(x<arr[mid]){
            h=mid-1;
        }
        else if(x>arr[mid]){
            l=mid+1;
        }
        else{
            cout << mid << endl;
            break;
        }
    }
    return 0;
}