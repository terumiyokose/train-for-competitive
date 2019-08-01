#include <iostream>
#include <math.h>
#include <algorithm>
#include <functional>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
int main(void){
  int n;
  int arr[n]; // <T>でT型のvector
  int fst[n]; 
  int ans[n]; 
    cin >> n;
    REP(i,n) cin >>arr[i];

    REP(x.m)ans[x] =arr[x];

    fst =arr;
    ans =arr;
    sort(ans,ans+n,greater<int>());
    int ret =0
    REP(k,n)
    REP(v,n)
    swap(arr[k],arr[v])
    if(arr==ans)ret=1; 

    if(ret>0)
    cout <<"YES";
    else cout <<"NO";

}
