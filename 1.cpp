#include <iostream>
#include <math.h>
using namespace std;
int main(void){

    int A,B,K;
    cin >>A >> B;

    K = (A+B)/2 ;
    if(abs(A-K)==abs(B-K))
    cout << (A+B)/2;
    else cout<< "IMPOSSIBLE";

}
