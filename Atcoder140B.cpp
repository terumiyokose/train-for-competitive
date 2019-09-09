//ABC140 B
#include <iostream>
#include <math.h>
#include <algorithm>
#include <functional>
#include <numeric>   
#include<vector>
#define REP(i,n) for(int i=0;i<n;i++)

using namespace std;

int main(void){
  
  int n;
  int total=0,total1=0;
  cin >> n;
  int A[n],B[n],C[n-2]; 
  
  REP(h,n) cin >> A[h];
  REP(k,n) cin >> B[k];
  REP(j,n) cin >> C[j];
  REP(m,n)total += B[m]; 
 
  //B行の最後がnであった場合
  if(A[n]!=n)REP(t,n-2)total +=C[t];
  else REP(t,n-1)total +=C[t];
 
  //int f = arraySum(A, n);
  
  cout << total;
    
}
