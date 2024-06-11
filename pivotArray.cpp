#include <iostream>
using namespace std;

int main(){
    int nums[6] = {1,7,3,6,5,6};
    int size = 6;
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++){  
        sum = sum + nums[i];  
    }
    int leftSum = 0;
    for(int i=0;i<size;i++){
        sum = sum - nums[i];
        if(leftSum == sum){
            return i;
        }
        leftSum += nums[i];
    }

    
    return 0;

}