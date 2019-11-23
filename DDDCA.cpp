/*
@author Terumi Yokose
https://atcoder.jp/contests/ddcc2020-qual/tasks/ddcc2020_qual_a
*/

#include <map>
#include <iostream>
using namespace std;

int main(void){
 int X;
 int Y;
 int ans;
cin >> X >> Y;
map<int,int> score;
  
score[1]=300000;
score[2]=200000;
score[3]=100000;

ans =0;
  
if(X==1 and Y==1) ans+=400000;

try{
ans+=score[X];
}catch(exception e){
}

try{
ans+=score[Y];
}catch(exception e){
}

cout << ans;
}
