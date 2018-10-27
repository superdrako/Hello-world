#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;
  int n;
  while(cin >> n){
    v.push_back(n);
  }
  for(int x = 0; x < (int) v.size(); x++){
    for(int y = x; y < (int) v.size() - 1; y++){
      if(v[y] > v[y+1]){
        int aux = v[y];
        v[y] = v[y+1];
        v[y+1] = aux;
      }
    }
  }
}
