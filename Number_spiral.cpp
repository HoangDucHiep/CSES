#include <bits/stdc++.h>

using namespace std;
int main(){
    long testcases;
    cin >> testcases;
    
    while(testcases--){
        long long x, y;
        cin >> x >> y;
        if(x >= y){
            if(x % 2 == 0){
                cout << (x*x - (y - 1)) << endl;
            }
            else{
                cout << ((x-1)*(x-1) + y) << endl;
            }
        }
        else{
            if(y % 2 == 0){
                cout << ((y-1)*(y-1) + x) << endl;
            }
            else{
                cout << (y*y - (x-1)) << endl;
            }
        }
    }
    return 0;
}