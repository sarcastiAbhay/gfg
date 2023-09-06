#include <bits/stdc++.h>
using namespace std;
int main() {
    
     int n; cin>>n;
      int a[n];
       int c=0;
      for(int i=1;i<n;i++){
          cin>>a[i];
        if(a[i]>a[i+1]){
            continue;
        }
        else {
            c++;
        }
      }
         cout<<c;
    return 0;
}