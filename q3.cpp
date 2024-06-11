#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n] = {};
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int size=n;
    int s=0,e = size-1;
    int mid = s + (e-s)/2;
    int arr1[mid+1] = {};
    int arr2[e-mid] = {};
    int k = 0;
    for(int i=0;i<mid+1;i++){
        arr1[k++] = arr[i];
    }  
    k=0;
    for(int i=mid+1;i<=e;i++){
        arr2[k++] = arr[i];
    }
    int i1=0;
    int i2=0;
    k=0;
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"first half of array:";
    printArray(arr1,size1);
    cout<<"second half of array:";
    printArray(arr2,size2);

    while(i1<size1 && i2<size2){
        if(arr1[i1]>arr2[i2]){
            arr[k++] = arr2[i2++];
        }
        else{
            arr[k++] = arr1[i1++];
        }
    }
    while(i1<size1){
        arr[k++] = arr1[i1++];
    }
    while(i2<size2){
        arr[k++] = arr2[i2++];
    }
    cout<<"sorted array:";
    printArray(arr,size);
    return 0;
}