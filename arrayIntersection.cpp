#include <iostream>
using namespace std;

int main(){
    int arr[3] = {1,2,3};
    int arr1[2] = {2,4};
    int num, i=0,j=0;
    while (i<3 && j<2){
        if(arr[i] == arr1[j]){
            num = arr[i];
            break;
        }
        else if( arr[i] > arr1[j] ){
            j++;
        }
        else{
            i++;
        }
    }
    cout << num << endl;
    return 0;
}