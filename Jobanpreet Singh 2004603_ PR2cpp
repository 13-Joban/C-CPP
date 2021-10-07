// We will see that how we can calculate power to any number in c++ like 2^3 =  8 


//  i have used recursion  

#include <bits/stdc++.h>

using namespace std;

int power(int n,int p){
//    Base case 

    if(p == 0){       
        return 1;
    }

//  calling  recursive function 
    return n * power(n,p-1);
}

int main(){

    int n,p;

 cin>>n>>p;  

    cout<<n<<"^"<<p<<" is : "<<power(n,p);  

    return 0;
}
