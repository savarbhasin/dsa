#include <bits/stdc++.h> 
using namespace std; 
bool isPossible(vector<int> &stalls,int k,int mid){
    
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i=0;i<stalls.size();i++){
        if (stalls[i]-lastPos >= mid){
            cout<<"mid:"<<mid<<endl;
            cowCount+=1;
            if(cowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }

    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){

    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int size = stalls.size();
    int maxi = -1;
    for(int i=0; i<size;i++){
        maxi = max(maxi,stalls[i]);
    }
    int s = 0;
    int e = maxi;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        cout<<"s: "<<s<<endl;
        if(isPossible(stalls,k,mid)){
            ans = mid;
            s = mid+1;
            
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {0,3,4,7,9,10};
    cout << aggressiveCows(v,4);
    return 0;
}
