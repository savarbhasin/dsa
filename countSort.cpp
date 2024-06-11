#include <iostream>
using namespace std;

void countSort(int arr[],int n){


}




void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[5] = {5,4,3,2,1};
	int max = INT_MIN;
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	int count[max]={0};
	for(int i=0;i<5;i++){
		count[arr[i]]++;
	}

	for(int i=1;i<=max;i++){
		count[i] += count[i-1];
	}
	
	print(count,max);
}
