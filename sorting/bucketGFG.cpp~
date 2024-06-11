#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
		
void bucketSort(float arr[], int size){
	vector<float> b[size];

	for(int i=0;i<size;i++){
		int bi = size*arr[i];
		b[bi].push_back(arr[i]);
	}

	for(int i=0;i<size;i++){
		sort(b[i].begin(),b[i].end());
	}
	int index=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<b[i].size();j++){
			arr[index++] = b[i][j];
		}
		
	}
	

}



int main(){
	float arr[] = {0.897,0.565,0.656,0.665,0.1234,0.3434};
	bucketSort(arr, sizeof(arr)/sizeof(arr[0]));
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
