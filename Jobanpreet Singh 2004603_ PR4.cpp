// we will see how to calculate gcd(greatest common divisor)  of a number in c++

//  i have used recursion

#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
//   base case
    if(b==0)
    return a;

//   recursive call
    return gcd(b,a%b);

}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

    return 0;
}
