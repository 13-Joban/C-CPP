// we will see how to print numbers upto lets n using recursion

#include<iostream>
using namespace std;

void printnum(int n){
    if(n == 1){
        cout << n << " ";
        return;
    }
    
    printnum(n - 1);
    cout << n << " ";
}
int main(){
    int n;
    cin >> n;
  
    printnum(n);
}
