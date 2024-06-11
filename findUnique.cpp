#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,1,2,2,45};
    int ans;
    for (int i: arr){
        ans = ans^i;
    } 
    cout << ans << endl;
    return 0;
}