#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<' ';
	}
	cout << endl;
}

int max(int arr[],int size){
	int max=arr[0];
	for(int i=1; i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}

int main(){

	string str;
	cout<<"Enter values of array(comma seperated):";
	getline(cin,str);
 
    vector<int> values;
 
    stringstream ss(str);
 
    for (int i; ss >> i;) {
        values.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
 

	
   

	int size = values.size();
	int finalArray[size];

	for(int i=1;i<size+1;i++){
		int arrayForMax[size-i+1];
		for(int j=0;j<size-i+1;j++){
			int min=INT_MAX;
			for(int k=0;k<i;k++){
				if(values[k+j]<min){
					min=values[k+j];
				}	
			}
			arrayForMax[j] = min;
		}
		finalArray[i-1] = max(arrayForMax,sizeof(arrayForMax)/sizeof(arrayForMax[0]));
	}
	printArray(finalArray,size);
	return 0;
}