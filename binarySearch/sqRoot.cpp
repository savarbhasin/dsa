#include <iostream>
using namespace std;

double morePrecision(int n,int precision,int sol){
    double factor=1;
    double ans = sol;
    for (int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;(j*j)<n;j+=factor){
            ans = j;
        }
    }
    return ans;
}

double sqRoot(int n){
    int s=0,e=n;
    int ans=0;
    while(s<=e){
        int mid = s+(e-s)/2;
        int square = mid*mid;
        if(square>n){
            e=mid-1;
        }
        else if(square<n){
            ans = mid;
            s=mid+1;
        }
        else if(square == n){
            ans = mid;
            break;
        }
    }
    return morePrecision(n,3,ans);
}
int main(){
    cout<< sqRoot(27);
    return 0;
}