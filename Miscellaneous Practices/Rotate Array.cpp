#include<bits/stdc++.h>
using namespace std;
/* void rotateIndex(int a[], int n){
    int temp = a[0];
    for(int i=0; i<n-1; i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}
void rotateArray(int a[], int n, int d){
    for(int i=0; i<d; i++){
        rotateIndex(a, n);
    }
} */
void reverseArray(int a[], int start, int end){
    while (start < end)
    {
        int temp = a[start]; 
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    } 
}
main()
 {
      int t;
	  cin>>t;
	  while(t--){
	      int n, d;
	      cin>>n>>d;
	      int a[n];
	      for(int i=0; i<n; i++){
	          cin>>a[i];
	      }	  
	   //   rotateArray(a, n, d);
	      reverseArray(a, 0, d-1);
	      reverseArray(a, d, n-1);
	      reverseArray(a, 0, n-1);
	      for(int i=0; i<n; i++){
	          cout<<a[i]<<" ";
	      }
	      cout<<endl;
	  }
	  
}