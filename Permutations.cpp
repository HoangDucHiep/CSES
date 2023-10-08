#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n < 4 && n != 1){
        cout << "NO SOLUTION";
    }
    else if(n == 4){
        cout << "2 4 1 3";
    }
    else{
        long long first_loop = n;
        while (first_loop > 0){
            cout << first_loop << " ";
            first_loop -= 2;
        }
        long long sec_loop = n - 1;
        while (sec_loop > 0){
            cout << sec_loop << " ";
            sec_loop -= 2;
        }
    }
    return 0;
}