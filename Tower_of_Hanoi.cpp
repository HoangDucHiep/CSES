#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux){
  if(n == 0) 
  {  
    return;
  }
  towerOfHanoi(n - 1, from, aux, to);
  cout << from << " " << to << "\n";
  towerOfHanoi(n - 1, aux, to, from);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  cout << pow(2, n) - 1 << "\n";
  towerOfHanoi(n, '1', '3', '2');
  return 0;
}