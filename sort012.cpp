#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout << endl;
}

int main(){
    int arr[5] = {2,1,0,0,1};
    int i=0,j=0,k=4;
    while(j<=k){
        switch(j){
            case 0:
                swap(arr[i],arr[j]);
                i++;
                j++;
                break;
            case 1:
                j++;
                break;
            case 2:
                swap(arr[j],arr[k]);
                k--;
                break;
        }
    }
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}