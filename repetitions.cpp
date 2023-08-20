#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cur = 1, best = 0, len = s.length();
    for(int i = 1; i < len; i++){
        if(s[i] != s[i-1]){
            best = max(best, cur);
            cur = 0;
        }
        cur ++;
    }
    best = max(best, cur);
    cout << best;
    return 0;
}