#include <iostream>
using namespace std;

int main(){

	int arr[5] = {4,5,3,1,2};

	for(int i=1;i<5;i++){
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			j--;
		
		}
		arr[j+1] = temp;
		
	}

	for(int i=0;i<5;i++){
		cout<<arr[i]<<" "<<endl;
	}

}
