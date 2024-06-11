#include <iostream>
#include <cmath>
using namespace std;

// int main(){
//     int num = -8;
//     int answer = 0;
//     int x=0;
//     while(num!=0){
//         int bit = num & 1;
//         answer  = bit*(pow(10,x)) +  answer;
//         num = num>>1;
//         x++;    
//     }
//     cout << answer;
//     return 0;
// }

int main(){
    int num = 110;
    int answer = 0;
    int x;
    while (num!=0){
        int bit = num & 1;
        answer += bit*(pow(2,x));
        num = num >> 1;
    }
    cout << answer << endl;
    return 0;
}