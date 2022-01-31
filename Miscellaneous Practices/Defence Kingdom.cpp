#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int w, h, n;
    cin>>w>>h>>n;
    vector<int> a, b; // For tower coordinates;
    a.push_back(0); // 0
    b.push_back(0); // 0
    for(int i=0; i<n; i++){
      int x, y;
      cin>>x>>y;
      a.push_back(x); // 0, 3, 11, 8
      b.push_back(y); // 0, 8, 2, 6
    }
      a.push_back(w+1); // 0, 3, 11, 8, 16
      b.push_back(h+1); // 0, 8, 2, 6, 9
      
      sort(a.begin(), a.end()); // 0, 3, 8, 11, 16
      sort(b.begin(), b.end()); // 0, 2, 6, 8, 9
      
      int maxx=0, maxy=0;
      
      for(int i=0; i<a.size()-1; i++){
        maxx = max(maxx, a[i+1]-a[i]-1);
        maxy = max(maxy, b[i+1]-b[i]-1);
      }
    cout<<maxx*maxy<<endl;
  }
  return 0;
}
